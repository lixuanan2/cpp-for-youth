// 【拍手和跺脚】
// 读入 n，是 0 到 100 的整数。从 1 数到 n：7 的倍数输出 Clap!；
//   不是 7 的倍数但个位是 7，输出 Stomp!；其余输出这个数。
// 输入 17，最后四行是 Clap!、15、16、Stomp!。
// 提示：三选一，用第 4 课的 else if。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 7 == 0 || i % 10 == 7) {
            cout << "Clap!" << endl;
        } else {
            cout << i << endl;
        }
    }
    return 0;
}
