// 【判断数的正负】
// 在比较程序上改：读入一个整数 n，范围是 -10^9 到 10^9。
//   正数输出 positive，0 输出 zero，负数输出 negative。
// 全部小写，只输出答案，不要写“请输入”。
// 例如输入：95
// 应该输出：positive
// 提示：0 单独算一种，别漏了它。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 0;
    cin >> a >> b;
    if (a > b) {
        cout << ">" << endl;
    } else if (a == b) {
        cout << "=" << endl;
    } else {
        cout << "<" << endl;
    }
    return 0;
}
