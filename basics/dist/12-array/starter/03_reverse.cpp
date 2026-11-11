// 【倒着输出】
// 先读入 n（1 到 100），再读入 n 个整数（-1000 到 1000）。
//   从最后一个输出到第一个，每个数占一行。
// 例如输入（每个一行）：3、4 7 2
// 应该输出（每个一行）：2、7、4
// 提示：读入不用动，只改第二个循环。
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
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    return 0;
}
