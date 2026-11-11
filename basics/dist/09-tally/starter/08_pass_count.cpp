// 【几个人及格？】
// 先读入 n（0 到 100），再读入 n 个成绩（0 到 100），都是整数。
//   60 分及以上算及格，输出及格人数。
// 例如输入（每个一行）：4、80 59 60 30
// 应该输出：2
// 提示：这回要数的，是读进来的数。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
