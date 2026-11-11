// 【每人加 5 分】
// 读入编号（1 到 999）和分数（0 到 95）。分数加 5，编号不变，
//   再输出编号和分数，中间空一格。
// 例如输入：101 85
// 应该输出：101 90
// 提示：只动分数那一格。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

struct Record {
    int id;
    int score;
};

int main() {
    Record r;
    cin >> r.id >> r.score;
    cout << r.id << " " << r.score << endl;
    return 0;
}
