// 【前三名】
// 先读入 n（3 到 100），再读入 n 个分数（0 到 100）。
//   输出最高的三个分数，从高到低，每个占一行。
// 例如输入（每个一行）：5、70 95 60 88 80
// 应该输出（每个一行）：95、88、80
// 提示：排好以后，只要前面三个。
// ↓ 在下面这段程序上改

#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int a[100] = {};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
