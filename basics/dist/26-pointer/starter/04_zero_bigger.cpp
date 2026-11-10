// 【把大的清零】
// 读入两个整数，通过 p 把大的那个改成 0，再输出 a 和 b，
//   中间空一格。一样大时改 a。
// 例如输入：3 8
// 应该输出：3 0
// 提示：从 pick 开始。p 已经指向大的那个了。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 0;
    cin >> a >> b;
    int *p = &a;
    if (b > a) {
        p = &b;
    }
    cout << *p << endl;
    return 0;
}
