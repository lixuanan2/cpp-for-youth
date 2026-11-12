// 井字棋 —— 第 3 关：谁赢了
// 你只改最下面“第 3 关：你来写”里的函数。
// 函数名和参数不能改：老师的测试按这些名字检查。
// 写完保存，运行 test_stage3.cpp 检查；全部通过再运行 play.cpp 玩。
// 这个文件没有 main，不要单独编译它；要编译运行的是 test_stage3.cpp。
//
// 棋盘是 9 个字符的字符串，格子编号 0 到 8：
//
//      0 | 1 | 2
//     ---+---+---
//      3 | 4 | 5
//     ---+---+---
//      6 | 7 | 8
//
// 'X' 和 'O' 是棋子，'.' 是空格。例如 "X...O...." 是 X 在 0 号格、O 在 4 号格。

#include <string>
using namespace std;


// ===== 老师写好的：前几关的参考答案，不用改 =====

bool can_put(string board, int i) {
    // 给它：棋盘 board（9 个字符），格子编号 i
    // 还给你：第 i 格能不能下，能就是 true，不能就是 false
    // 能下要同时满足两条：i 在 0 到 8 之间；board[i] 是 '.'
    // 注意：先查 i 在不在 0 到 8，再看 board[i]，不然会超出字符串
    // 例子：can_put(".........", 4) 还 true
    //       can_put("X........", 0) 还 false（已经有子了）
    //       can_put(".........", 9) 还 false（没有第 9 格）
    if (i < 0 || i > 8) {
        return false;
    }
    return board[i] == '.';
}


string put(string board, int i, char who) {
    // 给它：棋盘 board、格子编号 i（可以放心：0 到 8，而且是空格）、棋子 who（'X' 或 'O'）
    // 还给你：下完以后的新棋盘，还是 9 个字符
    // 提示：先看补页 extra-string-cell.md，string 的一格怎么改；交进来的 board 是副本，改好以后要还回去
    // 例子：put(".........", 4, 'X') 还 "....X...."
    //       put("X........", 8, 'O') 还 "X.......O"
    board[i] = who;
    return board;
}


// ===== 第 3 关：你来写 =====
// 把下面函数里的 return 换成你的代码。现在的 return 只是占位，测试会不通过。

char line_owner(string board, int a, int b, int c) {
    // 给它：棋盘，和一条线上的三个格子编号 a、b、c
    // 还给你：三格都是 'X' 就还 'X'，三格都是 'O' 就还 'O'，不然还 '.'
    // 例子：line_owner("XXX......", 0, 1, 2) 还 'X'
    //       line_owner("XXO......", 0, 1, 2) 还 '.'
    //       line_owner("O..O..O..", 0, 3, 6) 还 'O'
    return '.';
}


char winner(string board) {
    // 给它：棋盘
    // 还给你：赢的一方 'X' 或 'O'；没人赢就还 '.'
    // 一共 8 条线：横 0 1 2、3 4 5、6 7 8；竖 0 3 6、1 4 7、2 5 8；斜 0 4 8、2 4 6
    // 提示：把 8 条线的 line_owner 结果放进一个 char 数组，再找出不是 '.' 的那个
    // 例子：winner("OOO.X.X..") 还 'O'
    //       winner("X...X...X") 还 'X'
    //       winner("XOXXOOOXX") 还 '.'（下满了，平局）
    return '.';
}
