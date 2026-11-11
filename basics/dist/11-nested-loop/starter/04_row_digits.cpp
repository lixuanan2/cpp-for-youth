// 【第几行写几】
// 读入 n，是 1 到 9 的整数。第 1 行写 1 个 1，第 2 行写 2 个 2，
//   一直到第 n 行。
// 例如输入：3
// 应该输出（每个一行）：1、22、333
// 提示：星换成一个会变的数。
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
