// 【有几天更热？】
// 读入 n（1 到 100）和 n 天的气温（-50 到 50），都是整数。
//   输出有几天比前一天更热，一样热不算。
// 例如输入（每个一行）：4、10 13 12 15
// 应该输出：2
// 提示：不用输出差，用第 9 课的计数。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int a[100] = {};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++) {
        cout << a[i] - a[i - 1] << endl;
    }
    return 0;
}
