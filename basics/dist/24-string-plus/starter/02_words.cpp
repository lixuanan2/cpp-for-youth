// 【一句话有几个单词？】
// 读入一行英文，单词之间正好隔一个空格，开头和结尾没有空格。
//   输出有几个单词。
// 例如输入：I like C++
// 应该输出：3
// 提示：从 line 开始。第 16 课怎么一个一个看字符的？
// ↓ 在下面这段程序上改

#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    getline(cin, line);
    cout << line << endl;
    cout << line.size() << endl;
    return 0;
}
