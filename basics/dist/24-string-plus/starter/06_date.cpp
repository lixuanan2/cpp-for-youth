// 【拆开日期】
// 读入一个日期，格式是 年-月-日，年 4 位，月和日都是 2 位。
//   分三行输出年、月、日。
// 例如输入：2026-11-03
// 应该输出（每个一行）：2026、11、03
// 提示：从 substr 开始。先数一数年、月、日各从下标几开始。
// ↓ 在下面这段程序上改

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;
    cout << word.substr(0, 3) << endl;
    return 0;
}
