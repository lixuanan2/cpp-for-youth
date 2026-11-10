// 【写一个 cube】
// 读入整数 n，是 -100 到 100。写函数 cube 返回 n 的三次方，
//   调用后输出。
// 例如输入：2
// 应该输出：8
// 提示：从 square 开始。函数名和算式都要改，调用的地方也别忘了。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int square(int x) {
    return x * x;
}

int main() {
    int n = 0;
    cin >> n;
    int result = square(n);
    cout << result << endl;
    return 0;
}
