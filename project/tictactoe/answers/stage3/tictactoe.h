// 井字棋 —— 第 1 到 3 关的参考答案（老师用，不要发给学生）

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


char line_owner(string board, int a, int b, int c) {
    // 给它：棋盘，和一条线上的三个格子编号 a、b、c
    // 还给你：三格都是 'X' 就还 'X'，三格都是 'O' 就还 'O'，不然还 '.'
    // 例子：line_owner("XXX......", 0, 1, 2) 还 'X'
    //       line_owner("XXO......", 0, 1, 2) 还 '.'
    //       line_owner("O..O..O..", 0, 3, 6) 还 'O'
    if (board[a] != '.' && board[a] == board[b] && board[b] == board[c]) {
        return board[a];
    }
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
    char owners[8] = {line_owner(board, 0, 1, 2), line_owner(board, 3, 4, 5),
                      line_owner(board, 6, 7, 8), line_owner(board, 0, 3, 6),
                      line_owner(board, 1, 4, 7), line_owner(board, 2, 5, 8),
                      line_owner(board, 0, 4, 8), line_owner(board, 2, 4, 6)};
    char result = '.';
    for (int k = 0; k < 8; k++) {
        if (owners[k] != '.') {
            result = owners[k];
        }
    }
    return result;
}
