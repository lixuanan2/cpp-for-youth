// 【猜了几次？】
// 在 door 上改：打开门以后，再输出一共猜了几次，单独占一行。
//   每行读入一个整数，最后一定会读到 7。
// 例如输入（每个一行）：3、5、7
// 应该输出（每个一行）：Password?、Password?、Password?、Open!、3
// 提示：像 day 一样，再准备一个盒子来数。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int guess = 0;
    while (guess != 7) {
        cout << "Password?" << endl;
        cin >> guess;
    }
    cout << "Open!" << endl;
    return 0;
}
