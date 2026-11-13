// 井字棋 —— 老师给网页版用的小程序（第 @STAGE@ 关）。学生不用改，也不用看懂。
// play_web.py 会运行它：网页上点一下，play_web.py 就发一行命令过来，它调用你写的函数，回一行结果。
// 用的是和 play.cpp 一样的那组函数：can_put、put、winner、is_full、turn、computer_move。
//
// 先编译它（编译好的 api 或 api.exe 要和 play_web.py 在同一个文件夹）：
//   Dev-C++：打开 api.cpp，按 F9（编译）。
//   命令行：g++ api.cpp -o api
//
// 命令（一行一条）和回答（一行 JSON，和 Python 版网页接口一样）：
//   new                    回一个空棋盘
//   move X........ 4       轮到谁（turn）就替谁下在 4 号格
//   computer X........     电脑下一步（computer_move）
//   {"ok": true, "board": "X...O....", "cell": 4, "turn": "X", "winner": ".", "full": false}
//   {"ok": false, "message": "这一格不能下，换一格。", "board": ...}           点了不能下的格
//   {"ok": false, "error": "先让 test_stage@STAGE@.cpp 全部通过。", "detail": "...", "board": ...}   你的函数出错了

#include <iostream>
#include <string>
#include "tictactoe.h"
using namespace std;

const string HINT = "先让 test_stage@STAGE@.cpp 全部通过。";

string text(string s) {
    return "\"" + s + "\"";
}

string letter(char c) {
    if (c == 'X' || c == 'O' || c == '.') {
        return text(string(1, c));
    }
    return text("?");
}

string number(int n) {
    if (n < 0) {
        return "-" + number(-n);
    }
    if (n < 10) {
        return string(1, char('0' + n));
    }
    return number(n / 10) + string(1, char('0' + n % 10));
}

// 棋盘只能是 9 个字符，每个都是 X、O 或 .
bool good_board(string board) {
    if (board.size() != 9) {
        return false;
    }
    for (int k = 0; k < 9; k++) {
        if (board[k] != 'X' && board[k] != 'O' && board[k] != '.') {
            return false;
        }
    }
    return true;
}

string trouble(string board, string detail) {
    return "{\"ok\": false, \"error\": " + text(HINT) + ", \"detail\": " + text(detail) + ", \"board\": " + text(board) + "}";
}

// 下完一步以后的样子：轮到谁、谁赢了、下满没有，都问你的函数
string state(string board, int cell) {
    string full = is_full(board) ? "true" : "false";
    return "{\"ok\": true, \"board\": " + text(board) + ", \"cell\": " + number(cell) + ", \"turn\": " + letter(turn(board))
        + ", \"winner\": " + letter(winner(board)) + ", \"full\": " + full + "}";
}

string place(string board, int cell) {
    string after = put(board, cell, turn(board));
    if (!good_board(after)) {
        return trouble(board, "put 还回来的不是 9 个字符的棋盘");
    }
    return state(after, cell);
}

string answer(string command, string board, int cell) {
    if (command == "new") {
        return state(".........", -1);
    }
    if (!good_board(board)) {
        return trouble(".........", "网页发来的不是 9 个字符的棋盘");
    }
    if (command == "move") {
        if (!can_put(board, cell)) {
            return "{\"ok\": false, \"message\": \"这一格不能下，换一格。\", \"board\": " + text(board) + "}";
        }
        return place(board, cell);
    }
    if (command == "computer") {
        int pick = computer_move(board);
        if (!can_put(board, pick)) {
            return trouble(board, "computer_move 还了 " + number(pick) + "，这一格不能下");
        }
        return place(board, pick);
    }
    return "{\"ok\": false, \"message\": " + text("没有这个命令：" + command) + ", \"board\": " + text(board) + "}";
}

int main() {
    string command;
    while (cin >> command) {
        string board = ".........";
        int cell = -1;
        if (command == "move") {
            cin >> board >> cell;
        } else if (command == "computer") {
            cin >> board;
        }
        cout << answer(command, board, cell) << endl;
    }
    return 0;
}
