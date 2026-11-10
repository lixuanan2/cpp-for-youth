// 【正中间的数】
// 一直读整数，读到 0 停，0 不算，保证读到的是奇数个。排好以后，
//   只输出正中间的那个数。
// 例如输入：3 1 4 2 5 0
// 应该输出：3
// 提示：从 sorted 开始。排好以后，正中间的下标是几？
// ↓ 在下面这段程序上改

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;
    int x = 0;
    cin >> x;
    while (x != 0) {
        v.push_back(x);
        cin >> x;
    }
    sort(v.begin(), v.end());
    int n = v.size();
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
