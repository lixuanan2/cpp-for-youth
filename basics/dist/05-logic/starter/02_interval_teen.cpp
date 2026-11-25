// 【改成 13 到 15 岁】
// 把区间改成 13 到 15：在里面输出 Yes，不在里面输出 No。
// 先想好每个数的结果，再运行，看和你想的一样不一样。
// 例如输入：13
// 应该输出：Yes
// 提示：注意 15 也要算在里面。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    int age = 0;
    cin >> age;
    if (age >= 6 && age <= 12) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
