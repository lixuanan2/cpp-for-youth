// 【从大到小排的】
// 数组这回是从大到小排的，各不相同。找 x 是第几个，找不到输出 -1。
// 例如输入（每个一行）：5、9 7 5 3 1、7
// 应该输出：2
// 提示：a[mid] 比 x 大，x 该在哪边？
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int a[100] = {};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int x = 0;
    cin >> x;
    int lo = 0, hi = n - 1;
    int ans = -1;
    while (lo <= hi && ans == -1) {
        int mid = (lo + hi) / 2;
        if (a[mid] == x) {
            ans = mid + 1;
        } else if (a[mid] < x) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}
