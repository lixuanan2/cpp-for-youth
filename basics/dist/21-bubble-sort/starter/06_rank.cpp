// 【成绩排名】
// 先读入 n（1 到 20），再读入 n 行，
//   每行一个编号（1 到 999）和分数（0 到 100）。
// 按分数从高到低输出编号，每行一个；分数一样时，先输入的排前面。
// 例如输入（每个一行）：4、101 70、102 95、103 80、104 95
// 应该输出（每个一行）：102、104、103、101
// ↓ 从这里开始写

#include <iostream>
using namespace std;

struct Record {
    int id;
    int score;
};

int main() {
    int n = 0;
    cin >> n;
    return 0;
}
