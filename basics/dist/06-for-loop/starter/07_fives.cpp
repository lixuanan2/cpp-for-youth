// 【5 个 5 个地数】
// 读入 n，是 0 到 1000 的整数。从 5 开始，每次加 5，不超过 n。
//   每个数占一行。
// 例如输入：12
// 应该输出（每个一行）：5、10
// 提示：在上一个程序上改两个地方。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    for (int i = 2; i <= n; i += 2) {
        cout << i << endl;
    }
    return 0;
}
