// 【区间里有几个偶数？】
// 读入方式和 range 一样。每问一次 l r，
//   输出第 l 到第 r 个数里有几个偶数。
// 例如输入（每个一行）：5、3 2 4 1 6、2、2 4、1 5
// 应该输出（每个一行）：2、3
// 提示：不加数本身，加是不是偶数。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int a[101] = {};
    int s[101] = {};
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }
    int q = 0;
    cin >> q;
    for (int k = 0; k < q; k++) {
        int l = 0, r = 0;
        cin >> l >> r;
        cout << s[r] - s[l - 1] << endl;
    }
    return 0;
}
