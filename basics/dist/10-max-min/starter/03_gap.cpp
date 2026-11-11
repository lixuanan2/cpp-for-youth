// 【相差多少？】
// 先读入 n（1 到 100），再读入 n 个整数（-1000 到 1000）。
//   输出最大值减最小值。
// 例如输入（每个一行）：3、-4 -2 -8
// 应该输出：6
// 提示：一个擂台不够，就摆两个。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int best = 0;
    cin >> best;
    for (int i = 2; i <= n; i++) {
        int x = 0;
        cin >> x;
        if (x > best) {
            best = x;
        }
    }
    cout << best << endl;
    return 0;
}
