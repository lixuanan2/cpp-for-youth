// 【小的在前】
// 读入两个整数，用 swapTwo 让它们从小到大输出，中间空一格。
//   本来就是小的在前，就不用换。
// 例如输入：5 3
// 应该输出：3 5
// 提示：什么时候才需要换？
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

void swapTwo(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 0, b = 0;
    cin >> a >> b;
    swapTwo(a, b);
    cout << a << " " << b << endl;
    return 0;
}
