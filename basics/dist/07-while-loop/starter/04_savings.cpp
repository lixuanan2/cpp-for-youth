// 【存钱买玩具】
// 一行读入 a、d、b，用空格隔开。储蓄罐里有 a 元（0 到 100），
//   每天存 d 元（1 到 10），玩具 b 元（0 到 1000）。
// 钱不够就继续存。要存几天才够？
// 例如输入：10 3 20
// 应该输出：4
// 提示：想一想：这次 day 应该从几开始？
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int a = 0;
    cin >> a;
    int day = 1;
    while (a > 1) {
        a /= 2;
        day++;
    }
    cout << day << endl;
    return 0;
}
