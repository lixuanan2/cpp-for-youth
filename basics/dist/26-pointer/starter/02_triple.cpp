// 【通过 p 变 3 倍】
// 读入一个整数 x，让 p 指向 x，通过 p 把 x 变成原来的 3 倍，
//   最后输出 x。
// 例如输入：5
// 应该输出：15
// 提示：从 pointer 开始。全程不直接写 x =，只通过 p 改。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int x = 0;
    cin >> x;
    int *p = &x;
    cout << *p << endl;
    *p = *p + 1;
    cout << x << endl;
    return 0;
}
