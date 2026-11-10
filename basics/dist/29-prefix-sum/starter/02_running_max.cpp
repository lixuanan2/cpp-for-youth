// 【到今天为止的最高分】
// 读入 n 天的分数。第 i 个输出“第 1 到第 i 天里最高的分”，
//   都在一行里，每个后面空一格。
// 例如输入（每个一行）：5、3 1 4 1 5
// 应该输出：3 3 4 4 5
// 提示：从 prefix 开始。这回不是加起来，而是到目前为止最大的。
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
    for (int i = 1; i <= n; i++) {
        cout << s[i] << " ";
    }
    cout << endl;
    return 0;
}
