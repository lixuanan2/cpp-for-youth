// 第 5 关测试：电脑来下
// 老师提供，学生不用改。编译运行这个文件，怎么运行见 guide.md。
// 它会用同一个文件夹里你写的 tictactoe.h。

#include "tictactoe.h"
#include "check.h"

int main() {
    check_int(computer_move("XX.OO...."), 2, "轮到 X：下 2 号格就赢");
    check_int(computer_move("OO.XX.X.."), 2, "轮到 O：下 2 号格就赢");
    check_int(computer_move("XX..O...."), 2, "轮到 O：X 下 2 号格就赢了，要堵住 2");
    check_int(computer_move("X...X..O."), 8, "轮到 O：要堵住斜线的 8 号格");
    check_int(computer_move("XX.OO.X.."), 5, "轮到 O：自己能赢（5 号格）比堵对方（2 号格）更要紧");
    check_int(computer_move("X........"), 1, "没有要赢、要堵的：下第一个空格");
    check_int(computer_move("........."), 0, "空棋盘：下 0 号格");
    check_int(computer_move("XOXOX...."), 6, "轮到 O：X 下 6 或 8 都会赢，先堵编号小的 6");
    return check_summary();
}
