// 【是不是质数？】
// 读入一个正整数 n。正好有 2 个因数（1 和它自己）的叫质数。
//   是质数输出 Yes，不是输出 No。
// 例如输入：7
// 应该输出：Yes
// 提示：从 divisors 开始。不用输出因数，数一数有几个。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
