// 【最小和最大一起交回】
// 读入三个整数。写一个函数 minMax(a, b, c, lo, hi)，
//   把最小的放进 lo，最大的放进 hi。输出 lo 和 hi，中间空一格。
// 例如输入：3 1 2
// 应该输出：1 3
// 提示：从 divide 开始。哪几个参数要加 &？
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

void divide(int a, int b, int &q, int &r) {
    q = a / b;
    r = a % b;
}

int main() {
    int a = 0, b = 0;
    cin >> a >> b;
    int q = 0, r = 0;
    divide(a, b, q, r);
    cout << q << " " << r << endl;
    return 0;
}
