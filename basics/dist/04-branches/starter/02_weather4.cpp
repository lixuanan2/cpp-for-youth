// 【调整穿衣提醒的分档】
// 第 1 步：把 Hot 的分界从 30 改成 28。
// 第 2 步：再加一档，35 度及以上输出 Very hot。
// 例如输入：35
// 应该输出：Very hot
// 提示：新的一段要写在哪里，35 度才会运行它？
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int t = 0;
    cin >> t;
    if (t >= 30) {
        cout << "Hot" << endl;
    } else if (t >= 15) {
        cout << "Warm" << endl;
    } else {
        cout << "Cold" << endl;
    }
    return 0;
}
