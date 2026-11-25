// 【几个人达标？】
// 先读入 n，再读入 n 个跳绳成绩，都是整数。100 下及以上算达标，
//   输出达标人数。
// 例如输入（每个一行）：4、120 95 100 80
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
