// 【坏了一级台阶】
// 一步走 1 级或 2 级，但第 k 级坏了，不能踩上去。
//   一行读入 n 和 k（1 ≤ k ≤ n ≤ 40）。
// 输出走上第 n 级有几种走法，走不上去就输出 0。
// 例如输入：5 3
// 应该输出：2
// ↓ 从这里开始写

#include <iostream>
using namespace std;

int main() {
    int n = 0, k = 0;
    cin >> n >> k;
    int f[50] = {};
    cout << f[n] << endl;
    return 0;
}
