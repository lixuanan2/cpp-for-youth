// 【第一个放到最后】
// 先读入 n，再读入 n 个整数。先输出第 2 个到第 n 个，
//   最后输出第 1 个，每个数占一行。
// 例如输入（每个一行）：3、4 7 2
// 应该输出（每个一行）：7、2、4
// 提示：数组里的数不用动，只改输出的顺序。
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
