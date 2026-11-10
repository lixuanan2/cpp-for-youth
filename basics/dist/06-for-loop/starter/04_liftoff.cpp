// 【数完喊 Go!】
// n 是 0 到 100 的整数。倒着数到 1，最后输出一次 Go!。
// 例如输入：3
// 应该输出（每个一行）：3、2、1、Go!
// 提示：想清楚这一句写在大括号里面，还是外面。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    for (int i = n; i >= 1; i--) {
        cout << i << endl;
    }
    return 0;
}
