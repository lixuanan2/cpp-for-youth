// 【最低分是谁？】
// 先读入 n（1 到 100），再读入 n 行，
//   每行一个编号（1 到 999）和一个分数（0 到 100）。
// 输出最低分的编号，一样低时输出先出现的。
// 例如输入（每个一行）：3、101 85、102 92、103 70
// 应该输出：103
// 提示：比赛规则反过来。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

struct Record {
    int id;
    int score;
};

int main() {
    int n = 0;
    cin >> n;
    Record s[100];
    for (int i = 0; i < n; i++) {
        cin >> s[i].id >> s[i].score;
    }
    int best = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].score > s[best].score) {
            best = i;
        }
    }
    cout << s[best].id << endl;
    return 0;
}
