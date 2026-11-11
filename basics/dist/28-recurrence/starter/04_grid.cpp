// 【方格里有几条路？】
// m 行 n 列的方格（都是 1 到 10），从左上角走到右下角，
//   每步只能往右或往下走一格。输出一共有几条路。
// 例如输入：3 3
// 应该输出：6
// 提示：走到一格，最后一步从哪来？
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int c[20][20] = {};
    for (int i = 0; i < n; i++) {
        c[i][0] = 1;
        c[i][i] = 1;
        for (int j = 1; j < i; j++) {
            int left = c[i - 1][j - 1];
            int right = c[i - 1][j];
            c[i][j] = left + right;
        }
        for (int j = 0; j <= i; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
