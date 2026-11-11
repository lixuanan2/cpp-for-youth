// 【排第几个？】
// 先读入 n 和 n 个数，最后读入 x。输出 x 第一次出现是第几个，
//   从 1 数起；一次也没有就输出 0。
// 例如输入（每个一行）：4、4 7 4 2、4
// 应该输出：1
// 提示：这次人说的第几个，从 1 数起。
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
    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == x && pos == -1) {
            pos = i;
        }
    }
    cout << pos << endl;
    return 0;
}
