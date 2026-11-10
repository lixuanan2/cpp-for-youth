// 【两门都要到 90】
// 要求变严了：两门都到 90 分，才输出 Yes。
// 例如输入：90 80
// 应该输出：No
// 提示：只要换一个符号。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 0;
    cin >> a >> b;
    if (a >= 90 || b >= 90) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
