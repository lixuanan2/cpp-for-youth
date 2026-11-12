// 第 1 关测试：这一格能下吗
// 老师提供，学生不用改。编译运行这个文件，怎么运行见 guide.md。
// 它会用同一个文件夹里你写的 tictactoe.h。

#include "tictactoe.h"
#include "check.h"

int main() {
    check_bool(can_put(".........", 4), true, "空棋盘的 4 号格可以下");
    check_bool(can_put(".........", 0), true, "空棋盘的 0 号格可以下");
    check_bool(can_put(".........", 8), true, "空棋盘的 8 号格可以下");
    check_bool(can_put("X........", 0), false, "0 号格已经有 X，不能下");
    check_bool(can_put("....O....", 4), false, "4 号格已经有 O，不能下");
    check_bool(can_put("XOXOXOXO.", 8), true, "只剩 8 号格是空的，可以下");
    check_bool(can_put(".........", 9), false, "没有 9 号格，不能下");
    check_bool(can_put(".........", -1), false, "没有 -1 号格，不能下");
    return check_summary();
}
