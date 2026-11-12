// 井字棋 —— 第 1 到 2 关的参考答案（老师用，不要发给学生）

#include <string>
using namespace std;


// ===== 参考答案 =====

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
