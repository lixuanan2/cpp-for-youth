// 【行列互换】
// 先读入 r 和 c，再读入 r 行 c 列的整数。
//   原来的第 1 列变成第 1 行，输出 c 行 r 列，每个数后面空一格。
// 例如输入（每个一行）：2 3、1 2 3、4 5 6
// 应该输出（每个一行）：1 4 、2 5 、3 6
// 提示：读入不用动，换一个方向输出。
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
