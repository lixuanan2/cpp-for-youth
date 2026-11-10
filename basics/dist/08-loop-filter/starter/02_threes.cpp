// 【筛出 3 的倍数】
// 读入 n，是 0 到 100 的整数。输出 1 到 n 里 3 的倍数，
//   每个数占一行。
// 例如输入：10
// 应该输出（每个一行）：3、6、9
// 提示：for 不用动，只换筛子。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }
    return 0;
}
