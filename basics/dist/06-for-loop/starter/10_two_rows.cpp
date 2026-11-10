// 【再来一行 #】
// n 是 1 到 50 的整数。第一行 n 个 *，第二行 n 个 #。
// 例如输入：3
// 应该输出（每个一行）：***、###
// 提示：一个循环做完，下面还可以再写一个循环。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "*";
    }
    cout << endl;
    return 0;
}
