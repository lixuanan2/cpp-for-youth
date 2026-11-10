// 【画正方形】
// 读入 n，是 1 到 10 的整数。输出 n 行，每行 n 颗星，
//   星之间不加空格。
// 例如输入：2
// 应该输出（每个一行）：**、**
// 提示：从 rect 开始。这回只读一个数。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int rows = 0, cols = 0;
    cin >> rows >> cols;
    for (int row = 1; row <= rows; row++) {
        for (int col = 1; col <= cols; col++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
