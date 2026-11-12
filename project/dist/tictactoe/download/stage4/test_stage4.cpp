// 第 4 关测试：下满没有、轮到谁
// 老师提供，学生不用改。编译运行这个文件，怎么运行见 guide.md。
// 它会用同一个文件夹里你写的 tictactoe.h。

#include "tictactoe.h"
#include "check.h"

int main() {
    check_bool(is_full("........."), false, "空棋盘没下满");
    check_bool(is_full("XOXXOOOXX"), true, "9 格都有子，下满了");
    check_bool(is_full("XOXXOOOX."), false, "还剩 8 号格，没下满");
    check_bool(is_full(".OXXOOOXX"), false, "还剩 0 号格，没下满");
    check_char(turn("........."), 'X', "开局 X 先下");
    check_char(turn("X........"), 'O', "X 下了一步，轮到 O");
    check_char(turn("XO......."), 'X', "一人一步，轮到 X");
    check_char(turn("X.O.X...."), 'O', "X 两步、O 一步，轮到 O");
    check_char(turn("XOXOXO..."), 'X', "各三步，轮到 X");
    return check_summary();
}
