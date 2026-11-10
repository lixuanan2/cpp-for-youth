// 【第 k 小的数】
// 第一行读入 n 和 k（1 ≤ k ≤ n ≤ 100），
//   第二行读入 n 个整数（-1000 到 1000）。
// 输出第 k 小的数，一样大的也各算一个。
// 例如输入（每个一行）：5 2、40 10 30 20 50
// 应该输出：20
// 提示：排好以后，第 k 小的数在哪个下标？
// ↓ 在下面这段程序上改

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n = 0, k = 0;
    cin >> n >> k;
    int a[100] = {};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    return 0;
}
