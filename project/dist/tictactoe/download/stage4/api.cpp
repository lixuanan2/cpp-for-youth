// 井字棋 —— 老师给网页版用的小程序（第 4 关）。学生不用改，也不用看懂。
// play_web.py 会运行它：网页上点一下，play_web.py 就发一行命令过来，它调用你写的一个函数，回一行结果。
// 只用这一关和前几关的函数，后面几关的函数还没写也能编译。
//
// 先编译它（编译好的 api 或 api.exe 要和 play_web.py 在同一个文件夹）：
//   Dev-C++：打开 api.cpp，按 F9（编译）。
//   命令行：g++ api.cpp -o api
//
// 命令一行一条，回答一行：{"value": 你的函数还的东西}
//   can_put X...O.... 4        第 1 关起
//   put X...O.... 4 O          第 2 关起
//   line_owner X...O.... 0 1 2 第 3 关起
//   winner X...O....           第 3 关起
//   is_full X...O....          第 4 关起
//   turn X...O....             第 4 关起
//   computer_move X...O....    第 5 关起
//   别的命令回 {"locked": true}

#define STAGE 4

#include <iostream>
#include <string>
#include "tictactoe.h"
using namespace std;

string number(int n) {
    if (n < 0) {
        return "-" + number(-n);
    }
    if (n < 10) {
        return string(1, char('0' + n));
    }
    return number(n / 10) + string(1, char('0' + n % 10));
}

// 你的函数还回来的字符照原样交回去；JSON 里放不下的字符换成 ?
string text(string s) {
    string out = "\"";
    for (int k = 0; k < (int) s.size(); k++) {
        char c = s[k];
        if (c == '"' || c == '\\') {
            out += '\\';
            out += c;
        } else if (c < 32 || c > 126) {
            out += '?';
        } else {
            out += c;
        }
    }
    return out + "\"";
}

string value(string v) {
    return "{\"value\": " + v + "}";
}

string yes_no(bool b) {
    if (b) {
        return "true";
    }
    return "false";
}

string answer(string command) {
    string board;
    if (command == "can_put") {
        int cell = -1;
        cin >> board >> cell;
        return value(yes_no(can_put(board, cell)));
    }
#if STAGE >= 2
    if (command == "put") {
        int cell = -1;
        char who = 'X';
        cin >> board >> cell >> who;
        return value(text(put(board, cell, who)));
    }
#endif
#if STAGE >= 3
    if (command == "line_owner") {
        int a = 0, b = 0, c = 0;
        cin >> board >> a >> b >> c;
        return value(text(string(1, line_owner(board, a, b, c))));
    }
    if (command == "winner") {
        cin >> board;
        return value(text(string(1, winner(board))));
    }
#endif
#if STAGE >= 4
    if (command == "is_full") {
        cin >> board;
        return value(yes_no(is_full(board)));
    }
    if (command == "turn") {
        cin >> board;
        return value(text(string(1, turn(board))));
    }
#endif
#if STAGE >= 5
    if (command == "computer_move") {
        cin >> board;
        return value(number(computer_move(board)));
    }
#endif
    string rest;
    getline(cin, rest);
    return "{\"locked\": true}";
}

int main() {
    string command;
    while (cin >> command) {
        cout << answer(command) << endl;
    }
    return 0;
}
