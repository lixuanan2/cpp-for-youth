// 【正中间的数】
// 先读入 n，是 1 到 19 的奇数，再读入 n 个整数（-1000 到 1000）。
//   排好以后，只输出正中间的那个数。
// 例如输入（每个一行）：5、4 1 8 3 9
// 应该输出：4
// 提示：也从 sort 开始。排好以后，正中间的下标是几？
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int a[20] = {};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int pass = 0; pass < n - 1; pass++) {
        for (int j = 0; j < n - 1 - pass; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
