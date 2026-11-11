// 【从大到小】
// 先读入 n，再读入 n 个整数。把这串数从大到小排好，在一行里输出，
//   每个数后面空一格。
// 例如输入（每个一行）：3、3 1 2
// 应该输出：3 2 1
// 提示：只改一个符号。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int a[20] = {};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int pass = 0; pass < n - 1; pass++) {
        for (int j = 0; j < n - 1 - pass; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
