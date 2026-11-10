// 【个位是 7】
// 读入 n，是 0 到 100 的整数。输出 1 到 n 里个位是 7 的数，
//   每个数占一行。
// 例如输入：30
// 应该输出（每个一行）：7、17、27
// 提示：27 % 10 是 7。一个数除以 10 的余数，就是它的个位。
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
