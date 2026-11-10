// 【倒着念】
// 读入一个英文单词，长度是 1 到 100。把它倒过来输出在一行里，
//   结尾换行。
// 例如输入：cat
// 应该输出：tac
// 提示：从 letters 开始。i 倒着走，字母连在一行里。
// ↓ 在下面这段程序上改

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;
    int n = word.size();
    for (int i = 0; i < n; i++) {
        cout << word[i] << endl;
    }
    return 0;
}
