// 井字棋 —— 第 1 到 5 关的参考答案（老师用，不要发给学生）

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


bool is_full(string board) {
    // 给它：棋盘
    // 还给你：9 格都下满了吗（一个 '.' 都没有了）
    // 例子：is_full("XOXXOOOXX") 还 true
    //       is_full("XOXXOOOX.") 还 false
    int empty = 0;
    for (int i = 0; i < 9; i++) {
        if (board[i] == '.') {
            empty++;
        }
    }
    return empty == 0;
}


char turn(string board) {
    // 给它：棋盘（可以放心：X 先下，两人轮流）
    // 还给你：现在轮到谁下，'X' 或 'O'
    // X 和 O 一样多，轮到 X；X 比 O 多一个，轮到 O
    // 例子：turn(".........") 还 'X'
    //       turn("X........") 还 'O'
    //       turn("XO.......") 还 'X'
    int x = 0;
    int o = 0;
    for (int i = 0; i < 9; i++) {
        if (board[i] == 'X') {
            x++;
        }
        if (board[i] == 'O') {
            o++;
        }
    }
    if (x == o) {
        return 'X';
    }
    return 'O';
}


int computer_move(string board) {
    // 给它：没下完、也没人赢的棋盘。电脑替 turn(board) 那一方下
    // 还给你：电脑要下的格子编号 0 到 8
    // 按顺序想：
    //   1. 有我下了就赢的格子，就下那里（有几格就选编号最小的）
    //   2. 有对方下了就赢的格子，就堵住那里（也选编号最小的）
    //   3. 都没有，就下编号最小的空格
    // 提示：试一格 = can_put 看能不能下，put 下一下，winner 看看谁赢。试完不用“拿走”，因为 put 还回去的是新棋盘
    // 提示：没学 break，可以先让答案等于 -1，找到了再改；已经找到就不再改
    // 例子：computer_move("XX.OO....") 还 2（轮到 X，X 下 2 就赢）
    //       computer_move("XX..O....") 还 2（轮到 O，O 要堵住 2）
    //       computer_move("X........") 还 1（没有要赢、要堵的，下第一个空格）
    char me = turn(board);
    char other = 'X';
    if (me == 'X') {
        other = 'O';
    }
    int move = -1;
    for (int i = 0; i < 9; i++) {
        if (move == -1 && can_put(board, i)) {
            if (winner(put(board, i, me)) == me) {
                move = i;
            }
        }
    }
    for (int i = 0; i < 9; i++) {
        if (move == -1 && can_put(board, i)) {
            if (winner(put(board, i, other)) == other) {
                move = i;
            }
        }
    }
    for (int i = 0; i < 9; i++) {
        if (move == -1 && can_put(board, i)) {
            move = i;
        }
    }
    return move;
}
