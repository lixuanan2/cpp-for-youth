// 【把分数线改成 90】
// 把及格的分数线改成 90：90 分及以上输出 Pass，否则输出 Retry。
// 先猜 89 和 90 各输出什么，再运行验证。
// 例如输入：89
// 应该输出：Retry
// 提示：只改一个数字。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int score = 0;
    cin >> score;
    if (score >= 60) {
        cout << "Pass" << endl;
    } else {
        cout << "Retry" << endl;
    }
    return 0;
}
