// 【出现了几次？】
// 先读入 n（1 到 100）和 n 个数，最后读入 x，
//   都是 -1000 到 1000 的整数。输出 x 出现了几次。
// 例如输入（每个一行）：4、4 7 4 2、4
// 应该输出：2
// 提示：不问有没有，改问有几个：想想第 9 课的计数器。
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
    int x = 0;
    cin >> x;
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            found = true;
        }
    }
    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
