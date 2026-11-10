// 【猜了几次？】
// 读入 n 和心里想的数 s（1 ≤ s ≤ n ≤ 1000）。还是每次猜中间，
//   只输出一共猜了几次。
// 例如输入：100 37
// 应该输出：3
// 提示：从 guess 开始。不输出每次猜的数，数一数猜了几次。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int n = 0, s = 0;
    cin >> n >> s;
    int lo = 1, hi = n;
    int mid = 0;
    while (mid != s) {
        mid = (lo + hi) / 2;
        cout << mid << endl;
        if (mid < s) {
            lo = mid + 1;
        } else if (mid > s) {
            hi = mid - 1;
        }
    }
    return 0;
}
