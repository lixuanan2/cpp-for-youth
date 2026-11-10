// 【翻倍两次】
// 读入整数 n，是 -1000 到 1000。写函数 twice 返回 x 的两倍，
//   用它让 n 翻倍两次，再输出 n。
// 例如输入：3
// 应该输出：12
// 提示：从 add_one 开始。函数改成翻倍，再调用两次，每次都接回来。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int addOne(int x) {
    return x + 1;
}

int main() {
    int n = 0;
    cin >> n;
    n = addOne(n);
    cout << n << endl;
    return 0;
}
