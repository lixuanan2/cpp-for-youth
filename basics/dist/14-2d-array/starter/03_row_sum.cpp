// 【每一行的和】
// 先读入 r 和 c，再读入 r 行 c 列的整数。输出每一行的和，
//   每行一个数。
// 一行是一个同学，这就是每人的总分。
// 例如输入（每个一行）：2 3、1 2 3、4 5 6
// 应该输出（每个一行）：6、15
// 提示：每一行要一个自己的 total，想想它该写在哪一层。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int r = 0, c = 0;
    cin >> r >> c;
    int a[5][5] = {};
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
