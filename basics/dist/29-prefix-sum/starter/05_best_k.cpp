// 【连续 k 天最多】
// 第一行读入 n 和 k（1 ≤ k ≤ n ≤ 100），
//   第二行读入 n 天的数（-1000 到 1000），都是整数。
// 连着的 k 天加起来，最多是多少？
// 例如输入（每个一行）：5 2、3 1 4 1 5
// 应该输出：6
// ↓ 从这里开始写

#include <iostream>
using namespace std;

int main() {
    int n = 0, k = 0;
    cin >> n >> k;
    int a[101] = {};
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    cout << a[1] << endl;
    return 0;
}
