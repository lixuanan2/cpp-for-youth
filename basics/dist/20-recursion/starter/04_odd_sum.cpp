// 【奇数的和】
// 读入 n，是 0 到 20 的整数。用递归算 1 到 n 中所有奇数的和。
// 例如输入：5
// 应该输出：9
// 提示：从 sum 开始。n 是偶数时，这一层不加自己，只要小题的答案。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int sum(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sum(n - 1);
}

int main() {
    int n = 0;
    cin >> n;
    cout << sum(n) << endl;
    return 0;
}
