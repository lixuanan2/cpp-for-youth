// 【最大的翻倍】
// 读入三个整数 a b c（-1000 到 1000）。让一个指针走到最大的那个，
//   通过指针把它变成 2 倍，再输出 a b c。
// 一样大时改最前面那个。
// 例如输入：3 8 5
// 应该输出：3 16 5
// ↓ 从这里开始写

#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    cout << a << " " << b << " " << c << endl;
    return 0;
}
