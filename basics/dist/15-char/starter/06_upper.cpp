// 【转成大写】
// 读入一个小写字母，是 a 到 z 中的一个。输出对应的大写字母。
// 例如输入：c
// 应该输出：C
// 提示：先算它离 'a' 有几步，再从 'A' 走同样几步。
// ↓ 在下面这段程序上改

#include <iostream>
using namespace std;

int main() {
    char ch = 0;
    cin >> ch;
    cout << char(ch + 1) << endl;
    return 0;
}
