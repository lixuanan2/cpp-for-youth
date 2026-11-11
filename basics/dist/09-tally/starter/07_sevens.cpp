// 【7 的倍数在哪？】
// 读入 n，是 0 到 100 的整数。输出 1 到 n 里 7 的倍数，
//   每个数占一行。一个也没有，就输出一次 None。
// 例如输入：15
// 应该输出（每个一行）：7、14
// 提示：改筛子，改最后说的话。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
            count++;
        }
    }
    if (count == 0) {
        cout << "No" << endl;
    }
    return 0;
}
