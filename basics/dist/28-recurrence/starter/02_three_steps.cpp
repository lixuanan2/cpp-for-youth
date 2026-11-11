// 【一步最多 3 级】
// 一步可以走 1 级、2 级或 3 级。读入 n（1 到 30），
//   输出走上 n 级有几种走法。
// 3 级有 4 种：1+1+1、1+2、2+1、3。
// 例如输入：4
// 应该输出：7
// 提示：最后一步有几种走法？起点要填几个？
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int f[50] = {};
    f[1] = 1;
    f[2] = 2;
    for (int i = 3; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
    cout << f[n] << endl;
    return 0;
}
