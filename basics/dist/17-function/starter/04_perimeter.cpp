// 【长方形周长】
// 一行读入长 w 和宽 h，都是 1 到 1000 的整数，用空格隔开。
//   写函数 perimeter 返回周长 2 ×（w + h），调用后输出。
// 例如输入：3 5
// 应该输出：16
// 提示：两个参数换成长和宽。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int diff(int a, int b) {
    return a - b;
}

int main() {
    int a = 0, b = 0;
    cin >> a >> b;
    cout << diff(a, b) << endl;
    return 0;
}
