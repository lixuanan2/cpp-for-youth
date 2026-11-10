// 【隔一个倒着数】
// 读入 n，是 0 到 100 的整数。用 while 从 n 开始，每次减 2，
//   不小于 1。每个数占一行。
// 例如输入：7
// 应该输出（每个一行）：7、5、3、1
// 提示：起点、条件、更新都要动。i -= 2 是每轮减 2。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int i = 1;
    while (i <= n) {
        cout << i << endl;
        i++;
    }
    return 0;
}
