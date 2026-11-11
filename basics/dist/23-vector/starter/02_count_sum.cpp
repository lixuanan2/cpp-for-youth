// 【几个数，加起来多少？】
// 一直读整数（-1000 到 1000，不是 0，最多 100 个），读到 0 停，
//   0 不算。
// 第一行输出读到几个数，第二行输出它们的和。
// 例如输入：3 1 4 0
// 应该输出（每个一行）：3、8
// 提示：读入不用动，改后面怎么用。
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
