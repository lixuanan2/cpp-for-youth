// 【把优秀线改成 85】
// 及格线还是 60，让 85 分及以上都输出 Excellent。
// 例如输入：84
// 应该输出：Pass
// 提示：只改一个数字。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int score = 0;
    cin >> score;
    if (score >= 90) {
        cout << "Excellent" << endl;
    } else if (score >= 60) {
        cout << "Pass" << endl;
    } else {
        cout << "Retry" << endl;
    }
    return 0;
}
