// 【75 到 89 分输出 Good】
// 回到 90 分优秀、60 分及格的程序，原来的三种结果都留着，
//   再多出一种，一共四条路。
// 例如输入：75
// 应该输出：Good
// 提示：再写一段 else if，想清楚放在哪里。
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
