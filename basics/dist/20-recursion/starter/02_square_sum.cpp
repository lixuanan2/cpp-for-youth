// 【平方和】
// 读入一个不小于 0 的整数 n。用递归算 1×1 + 2×2 + … + n×n。
// 例如输入：3
// 应该输出：14
// 提示：终点不变，组合那一步改一改。
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
