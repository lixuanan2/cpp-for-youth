// 【加 1 再输出】
// 读入一个数字字符，是 0 到 9 中的一个。把它变成数，
//   加 1 以后输出。
// 例如输入：7
// 应该输出：8
// 提示：从 digit 开始，先变成数，再算。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    char ch = 0;
    cin >> ch;
    int digit = ch - '0';
    cout << digit << endl;
    return 0;
}
