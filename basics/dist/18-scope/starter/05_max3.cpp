// 【三个数里最大的】
// 一行读入三个整数，都是 -1000 到 1000，用空格隔开。
//   调用 bigger 两次，输出最大的那个。
// 例如输入：-4 -2 -8
// 应该输出：-2
// 提示：bigger 已经写好了。先比两个，再拿结果和第三个比。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int bigger(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

int main() {
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    return 0;
}
