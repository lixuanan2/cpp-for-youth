// 【偶数的和】
// 读入 n，是 0 到 1000 的整数。输出 1 到 n 里所有偶数的和。
// 例如输入：6
// 应该输出：12
// 提示：不是每个数都放进罐子，加一个筛子。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int total = 0;
    for (int i = 1; i <= n; i++) {
        total += i;
    }
    cout << total << endl;
    return 0;
}
