// 【倒三角】
// 读入 n，是 1 到 10 的整数。第 1 行 n 颗星，每往下一行少一颗，
//   星之间不加空格。
// 例如输入：3
// 应该输出（每个一行）：***、**、*
// 提示：先列表：n 是 3 时，第 1、2、3 行各要几颗？
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
