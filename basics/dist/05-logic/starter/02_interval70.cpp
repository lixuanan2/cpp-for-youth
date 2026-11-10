// 【改成 70 到 79】
// 把区间改成 70 到 79：在里面输出 Yes，不在里面输出 No。
// 先想好每个数的结果，再运行，看和你想的一样不一样。
// 例如输入：70
// 应该输出：Yes
// 提示：注意 79 也要算在里面。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int score = 0;
    cin >> score;
    if (score >= 60 && score < 90) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
