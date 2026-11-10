// 【改成算周长】
// 还是读入长和宽，这次输出长方形的周长。
// 例如输入：5 3
// 应该输出：16
// 提示：想一想要不要加括号。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int length = 0, width = 0;
    cin >> length >> width;
    cout << length * width << endl;
    return 0;
}
