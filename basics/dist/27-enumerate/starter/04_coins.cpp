// 【凑钱有几种？】
// 只有 2 元和 5 元两种钱，张数不限，可以不用某一种。读入 n，
//   输出正好凑出 n 元有几种凑法。
// 例如输入：10
// 应该输出：2
// 提示：从 chicken 开始。这回试 5 元有几张，剩下的给 2 元。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int heads = 0, legs = 0;
    cin >> heads >> legs;
    bool found = false;
    for (int c = 0; c <= heads; c++) {
        int r = heads - c;
        if (2 * c + 4 * r == legs) {
            cout << c << " " << r << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "No answer" << endl;
    }
    return 0;
}
