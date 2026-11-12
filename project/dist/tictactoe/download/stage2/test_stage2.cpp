// 第 2 关测试：下一步棋
// 老师提供，学生不用改。编译运行这个文件，怎么运行见 guide.md。
// 它会用同一个文件夹里你写的 tictactoe.h。

#include "tictactoe.h"
#include "check.h"

int main() {
    check_text(put(".........", 4, 'X'), "....X....", "在空棋盘中间下 X");
    check_text(put(".........", 0, 'O'), "O........", "在 0 号格下 O");
    check_text(put("X........", 8, 'O'), "X.......O", "在 8 号格下 O，0 号格的 X 不能动");
    check_text(put("XO.XO....", 6, 'X'), "XO.XO.X..", "下完以后其他格子都不变");
    return check_summary();
}
