// 【每次拿走 3 颗】
// 盒子里有 n 颗糖，n 是 0 到 100 的整数。只要还有至少 3 颗，
//   就拿走 3 颗，输出还剩几颗。
// 例如输入：10
// 应该输出（每个一行）：7、4、1
// 提示：在 halve 上改两处：条件和计算。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int a = 0;
    cin >> a;
    while (a > 1) {
        a = a / 2;
        cout << a << endl;
    }
    return 0;
}
