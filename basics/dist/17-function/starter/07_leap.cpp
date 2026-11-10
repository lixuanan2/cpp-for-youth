// 【数一数闰年】
// main 已经写好：读入 a 和 b（1 到 3000，a 不大于 b），
//   数 a 到 b 年里有几个闰年。你只写函数 bool leap(int y)。
// 能被 4 整除但不能被 100 整除，或者能被 400 整除，就是闰年。
// 例如输入：2000 2024
// 应该输出：7
// 提示：只改 leap 里 return 的那一行。
// ↓ 从这里开始写

#include <iostream>
using namespace std;

bool leap(int y) {
    return y == 0;
}

int main() {
    int a = 0, b = 0;
    cin >> a >> b;
    int count = 0;
    for (int y = a; y <= b; y++) {
        if (leap(y)) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
