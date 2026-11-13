# 井字棋 —— 老师的网页版前端（第 @STAGE@ 关）。学生不用改，也不用看懂。
# 先让 test_stage@STAGE@.cpp 全部通过，再编译 api.cpp，最后运行这个文件（要装 Python）：它会打开浏览器，在网页上点格子下棋。
# 它和 play.cpp 用的是同一组函数：can_put、put、winner、is_full、turn、computer_move。
# 网页的每一下都变成一行命令交给 api（api.cpp 编译出来的程序），api 调用你的函数再回一行结果。
# 画面从终端换成了网页，你写的 tictactoe.h 一行都不用改。
# 网页在 web 文件夹里，图片在 web/assets：board.png 是棋盘，x.png、o.png 是棋子。换成自己画的也行，文件名不变就好。
#
# 网页和这个文件怎么说话（和 Python 版一样）：
#   POST /api/new        发 {}                              回一个空棋盘
#   POST /api/move       发 {"board": "X........", "cell": 4}  轮到谁（turn）就替谁下在 cell
#   POST /api/computer   发 {"board": "X........"}           电脑下一步（computer_move）
#   回的都是 JSON，由 api 拼好：
#     {"ok": true, "board": "X...O....", "cell": 4, "turn": "X", "winner": ".", "full": false}
#     {"ok": false, "message": "这一格不能下，换一格。", "board": ...}          点了不能下的格
#     {"ok": false, "error": "先让 test_stage@STAGE@.cpp 全部通过。", "detail": "...", "board": ...}  你的函数出错了
#   输赢、平局、轮到谁，全由你的函数说了算；网页只负责画出来和收点击。
# 只在这台电脑上打开（127.0.0.1），别的电脑连不进来。按 Ctrl+C 结束。

import json
import os
import subprocess
import sys
import threading
import webbrowser
from http.server import BaseHTTPRequestHandler, HTTPServer


for stream in (sys.stdout, sys.stderr):  # 有的电脑的控制台显示不了中文，换成 UTF-8；学生不用管
    try:
        "中文".encode(stream.encoding or "ascii")
    except (LookupError, UnicodeEncodeError):
        stream.reconfigure(encoding="utf-8")

HERE = os.path.dirname(os.path.abspath(__file__))
WEB = os.path.join(HERE, "web")
HINT = "先让 test_stage@STAGE@.cpp 全部通过。"
TYPES = {".html": "text/html; charset=utf-8", ".png": "image/png", ".svg": "image/svg+xml", ".css": "text/css", ".js": "text/javascript"}
API = os.path.join(HERE, "api.exe" if os.name == "nt" else "api")
BUILD = "先编译 api.cpp：Dev-C++ 打开 api.cpp 按 F9；或者在这个文件夹里输入 g++ api.cpp -o api"


class Api:
    # 编译好的 api 程序：发一行命令，读一行回答。它崩了（比如下标超出 0 到 8）就重新开一个
    def __init__(self):
        self.process = None
        self.lock = threading.Lock()

    def start(self):
        self.process = subprocess.Popen([API], cwd=HERE, stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.DEVNULL)

    def ask(self, command):
        with self.lock:
            if self.process is None or self.process.poll() is not None:
                self.start()
            try:
                self.process.stdin.write((command + "\n").encode("utf-8"))
                self.process.stdin.flush()
                line = self.process.stdout.readline().decode("utf-8", "replace")
            except OSError:
                line = ""
            if not line.strip():
                self.process = None
                return None
            return json.loads(line)

    def stop(self):
        if self.process is not None and self.process.poll() is None:
            self.process.kill()


api = Api()


def check_board(board):
    return type(board) == str and len(board) == 9 and all(c in "XO." for c in board)


def answer(path, asked):
    board = str(asked.get("board", "........."))
    commands = {"/api/new": "new", "/api/move": "move %s %d", "/api/computer": "computer %s"}
    if path not in commands:
        return {"ok": False, "message": "没有这个接口：" + path, "board": board}
    if path != "/api/new" and not check_board(board):
        return {"ok": False, "error": HINT, "detail": "网页发来的不是 9 个字符的棋盘：" + repr(board), "board": "........."}
    try:
        cell = int(asked.get("cell", -1))
    except (TypeError, ValueError):
        cell = -1
    command = commands[path] % ((board, cell) if path == "/api/move" else (board,) if path == "/api/computer" else ())
    got = api.ask(command)
    if got is None:
        return {"ok": False, "error": HINT, "detail": "api 没有回答：你的函数可能让程序停了（比如下标超出 0 到 8，或者死循环）", "board": board}
    return got


class Handler(BaseHTTPRequestHandler):
    # http.server 要求这样写一个类；里面只有两件事：送网页文件、回答网页的问题
    def do_GET(self):
        name = "index.html" if self.path in ("/", "/index.html") else self.path.lstrip("/")
        file = os.path.normpath(os.path.join(WEB, name))
        if not file.startswith(WEB) or not os.path.isfile(file):
            self.send_error(404)
            return
        with open(file, "rb") as f:
            self.send(f.read(), TYPES.get(os.path.splitext(file)[1], "application/octet-stream"))

    def do_POST(self):
        size = int(self.headers.get("Content-Length", 0))
        try:
            asked = json.loads(self.rfile.read(size) or b"{}")
        except ValueError:
            asked = {}
        self.send(json.dumps(answer(self.path, asked), ensure_ascii=False).encode("utf-8"), "application/json; charset=utf-8")

    def send(self, data, kind):
        self.send_response(200)
        self.send_header("Content-Type", kind)
        self.send_header("Content-Length", str(len(data)))
        self.send_header("Cache-Control", "no-store")
        self.end_headers()
        self.wfile.write(data)

    def log_message(self, *args):
        pass  # 不在终端里刷屏


def self_test(url):
    # 老师检查用：python play_web.py --selftest。不开浏览器，像网页一样按接口下完几局
    import urllib.request

    def ask(path, asked):
        request = urllib.request.Request(url + path, json.dumps(asked).encode("utf-8"), {"Content-Type": "application/json"})
        return json.loads(urllib.request.urlopen(request, timeout=10).read().decode("utf-8"))

    def fail(name, got):
        print("自检没通过（" + name + "）：" + got.get("error", got.get("message", "")) + " " + got.get("detail", ""))
        sys.exit(1)

    page = urllib.request.urlopen(url + "/", timeout=10).read().decode("utf-8")
    pictures = [urllib.request.urlopen(url + "/assets/" + name, timeout=10).read() for name in ("board.png", "x.png", "o.png")]
    if "井字棋" not in page or any(not p.startswith(b"\x89PNG") for p in pictures):
        print("自检没通过：网页或图片打不开")
        sys.exit(1)
    got = ask("/api/new", {})
    for cell in [0, 3, 1, 4, 2]:
        got = ask("/api/move", {"board": got["board"], "cell": cell})
    if got.get("winner") != 'X':
        fail("两个人下", got)
    if ask("/api/move", {"board": "....X....", "cell": 4}).get("message") != "这一格不能下，换一格。":
        fail("点已经有棋子的格", {})
    for computer_side, name in [('O', "你先下"), ('X', "电脑先下")]:
        got = ask("/api/new", {})
        while got.get("ok") and got["winner"] == '.' and not got["full"]:
            if got["turn"] == computer_side:
                got = ask("/api/computer", {"board": got["board"]})
            else:
                got = ask("/api/move", {"board": got["board"], "cell": got["board"].index('.')})
        if not got.get("ok"):
            fail(name, got)
    print("自检通过：网页、3 张图片，两个人下、点已经有棋子的格、你先下、电脑先下都对。")


def main():
    if not os.path.isfile(API):
        print("还没有编译好的 api。" + BUILD)
        sys.exit(1)
    server = HTTPServer(("127.0.0.1", 0), Handler)  # 端口写 0：让电脑自己挑一个空着的
    url = "http://127.0.0.1:" + str(server.server_address[1])
    if "--selftest" in sys.argv:
        threading.Thread(target=server.serve_forever, daemon=True).start()
        try:
            self_test(url)
        finally:
            server.shutdown()
            api.stop()
        return
    print("井字棋网页版：" + url + "/")
    print("浏览器没有自己打开的话，把上面的网址复制到浏览器里。按 Ctrl+C 结束。")
    webbrowser.open(url + "/")
    try:
        server.serve_forever()
    except KeyboardInterrupt:
        print("再见！")
    finally:
        api.stop()


main()
