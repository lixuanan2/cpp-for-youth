// 【只存偶数】
// 一直读整数，读到 0 停，0 不算。只把偶数存进 vector，
//   读完以后按原来的顺序输出，每个占一行。
// 例如输入：3 8 1 4 0
// 应该输出（每个一行）：8、4
// 提示：也从 reverse 开始。放进去之前，先过一道筛子。
// ↓ 在下面这段程序上改

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int x = 0;
    cin >> x;
    while (x != 0) {
        v.push_back(x);
        cin >> x;
    }
    int n = v.size();
    for (int i = n - 1; i >= 0; i--) {
        cout << v[i] << endl;
    }
    return 0;
}
