// 井字棋 —— 老师的文字版前端（第 5 关）。学生不用改，也不用看懂。
// 先编译运行 test_stage5.cpp，全部通过以后再编译运行这个文件。
// 关卡越往后，这里能玩的就越多：
//   第 1 关：试试 can_put
//   第 2 关：两个人随便下（还不会判断输赢）
//   第 3 关：两个人对战，能判断输赢
//   第 4 关：用你的 turn、is_full 管轮流和平局
//   第 5 关：可以和电脑下

#define STAGE 5

#include <iostream>
#include <string>
#include "tictactoe.h"
#ifdef _WIN32
#include <windows.h>
#endif

using namespace std;

// 读一个词；没有输入了就当作 q
string read_word(string prompt) {
    cout << prompt;
    string s;
    if (!(cin >> s)) {
        s = "q";
    }
    return s;
}

// 是不是整数（可以带负号）；是就放进 n
bool to_int(string s, int &n) {
    if (s.size() == 0 || s.size() > 3) {
        return false;
    }
    int sign = 1;
    int start = 0;
    if (s[0] == '-') {
        sign = -1;
        start = 1;
    }
    if (start == (int)s.size()) {
        return false;
    }
    n = 0;
    for (int k = start; k < (int)s.size(); k++) {
        if (s[k] < '0' || s[k] > '9') {
            return false;
        }
        n = n * 10 + (s[k] - '0');
    }
    n = n * sign;
    return true;
}

void show(string board) {
    for (int r = 0; r < 3; r++) {
        cout << " ";
        for (int c = 0; c < 3; c++) {
            int cell = r * 3 + c;
            if (board[cell] == '.') {
                cout << cell;
            } else {
                cout << board[cell];
            }
            if (c < 2) {
                cout << " | ";
            }
        }
        cout << endl;
        if (r < 2) {
            cout << "---+---+---" << endl;
        }
    }
    cout << endl;
}

// 问人下哪一格；输入 q 退出，返回 -1
int ask(string board, char who) {
    while (true) {
        string s = read_word(string(1, who) + " 下哪一格（0-8，q 退出）：");
        if (s == "q") {
            return -1;
        }
        int n;
        if (to_int(s, n) && can_put(board, n)) {
            return n;
        }
        cout << "这一格不能下，换一格。" << endl;
    }
}

#if STAGE == 1
void stage1() {
    string board = "X...O....";
    show(board);
    cout << "第 1 关：输入格子编号，看看你的 can_put 怎么说。输入 q 退出。" << endl;
    while (true) {
        string s = read_word("格子编号：");
        if (s == "q") {
            return;
        }
        int n;
        if (to_int(s, n)) {
            cout << "can_put(\"" << board << "\", " << n << ") 还 "
                 << (can_put(board, n) ? "true" : "false") << endl;
        } else {
            cout << "请输入一个整数。" << endl;
        }
    }
}
#endif

#if STAGE >= 2
// computer 是电脑下的那一方 'X' 或 'O'；'.' 表示两个人对战
// 返回赢家 'X'、'O'，平局 '.'，中途退出 'q'
char one_game(char computer) {
    string board = ".........";
#if STAGE < 4
    int moves = 0;
#endif
    char who = 'X';
    while (true) {
        show(board);
#if STAGE >= 4
        who = turn(board);
#endif
        int i;
        if (who == computer) {
#if STAGE >= 5
            i = computer_move(board);
            if (!can_put(board, i)) {
                cout << "computer_move 还了 " << i << "，这一格不能下。先让 test_stage5.cpp 全部通过。" << endl;
                return 'q';
            }
            cout << "电脑下在 " << i << endl;
#else
            i = -1;
#endif
        } else {
            i = ask(board, who);
            if (i == -1) {
                return 'q';
            }
        }
        board = put(board, i, who);
#if STAGE < 4
        moves++;
#endif
#if STAGE >= 3
        if (winner(board) != '.') {
            show(board);
            return winner(board);
        }
#endif
        bool full;
#if STAGE >= 4
        full = is_full(board);
#else
        full = (moves == 9);
#endif
        if (full) {
            show(board);
            return '.';
        }
#if STAGE < 4
        if (who == 'X') {
            who = 'O';
        } else {
            who = 'X';
        }
#endif
    }
}
#endif

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(65001);   // 让 Windows 控制台按 UTF-8 显示中文（要在教室电脑上确认）
#endif
#if STAGE == 1
    stage1();
#else
    if (STAGE == 2) {
        cout << "第 2 关：两个人轮流下，还不会判断输赢（第 3 关做完就会了）。" << endl;
    }
    char computer = '.';
    if (STAGE >= 5) {
        string s = read_word("1 = 两个人下，2 = 你先下（X）和电脑下，3 = 电脑先下：");
        if (s == "2") {
            computer = 'O';
        }
        if (s == "3") {
            computer = 'X';
        }
    }
    int sx = 0, so = 0, sd = 0;
    bool again = true;
    while (again) {
        char result = one_game(computer);
        if (result == 'q') {
            again = false;
        } else {
            if (STAGE == 2) {
                cout << "下满了。" << endl;
            } else if (result == '.') {
                cout << "平局！" << endl;
            } else {
                cout << result << " 赢了！" << endl;
            }
            if (result == 'X') sx++;
            if (result == 'O') so++;
            if (result == '.') sd++;
            cout << "比分：X " << sx << "  O " << so << "  平局 " << sd << endl;
            again = (read_word("再来一局？（y/n）：") == "y");
        }
    }
#endif
    cout << "再见！" << endl;
    return 0;
}
