// 【绝对值】
// 读入整数 x，是 -1000 到 1000。写函数 absolute 返回 x 的绝对值，
//   调用后输出。
// 例如输入：-5
// 应该输出：5
// 提示：从 bigger 开始。负数就交回它的相反数，用 -x。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int bigger(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

int main() {
    int a = 0, b = 0;
    cin >> a >> b;
    cout << bigger(a, b) << endl;
    return 0;
}
