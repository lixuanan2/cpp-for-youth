// 第 3 关测试：谁赢了
// 老师提供，学生不用改。编译运行这个文件，怎么运行见 guide.md。
// 它会用同一个文件夹里你写的 tictactoe.h。

#include "tictactoe.h"
#include "check.h"

int main() {
    check_char(line_owner("XXX......", 0, 1, 2), 'X', "0 1 2 三格都是 X");
    check_char(line_owner("XXO......", 0, 1, 2), '.', "0 1 2 不一样，没人占");
    check_char(line_owner(".........", 0, 1, 2), '.', "三格都是空的，不算谁占");
    check_char(line_owner("O..O..O..", 0, 3, 6), 'O', "0 3 6 三格都是 O");
    check_char(line_owner("X...X...X", 0, 4, 8), 'X', "斜线 0 4 8 都是 X");
    check_char(winner("OOO.X.X.."), 'O', "第一横排 O 赢");
    check_char(winner("...XXX.O."), 'X', "第二横排 X 赢");
    check_char(winner("O.XO.XX.."), '.', "差一点但没人赢");
    check_char(winner(".O..O..O."), 'O', "中间一竖 O 赢");
    check_char(winner("X...X...X"), 'X', "斜线 0 4 8 X 赢");
    check_char(winner("..O.O.O.."), 'O', "斜线 2 4 6 O 赢");
    check_char(winner("......XXX"), 'X', "最下面一横排 X 赢");
    check_char(winner("XOXXOOOXX"), '.', "下满了也没人赢，是平局");
    check_char(winner("........."), '.', "空棋盘没人赢");
    return check_summary();
}
