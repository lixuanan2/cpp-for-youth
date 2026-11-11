// 【全班总分】
// 先读入 n（0 到 100），再读入 n 个成绩（0 到 100），都是整数。
//   输出总分。
// 例如输入（每个一行）：3、80 85 90
// 应该输出：255
// 提示：这回放进罐子的，是读进来的数。
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
