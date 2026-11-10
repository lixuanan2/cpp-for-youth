// 【最矮的是第几个？】
// 先读入 n（1 到 100），再读入 n 个整数（-1000 到 1000）。
//   第一行输出最小的数，第二行输出它是第几个。
// 例如输入（每个一行）：4、7 2 5 2
// 应该输出（每个一行）：2、2
// 提示：从 pos 开始。这回要最小的，并列时留第一个。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int best = 0;
    cin >> best;
    int pos = 1;
    for (int i = 2; i <= n; i++) {
        int x = 0;
        cin >> x;
        if (x > best) {
            best = x;
            pos = i;
        }
    }
    cout << best << endl;
    cout << pos << endl;
    return 0;
}
