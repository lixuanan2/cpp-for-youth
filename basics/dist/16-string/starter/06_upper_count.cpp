// 【有几个大写字母？】
// 读入一个英文单词，长度是 1 到 100。输出它里面有几个大写字母。
// 例如输入：HeLLo
// 应该输出：3
// 提示：从 count 开始。大写字母的编号从 'A' 到 'Z' 连着，
//   想想第 5 课的 &&。
// ↓ 在下面这段程序上改

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    char target = 0;
    cin >> word >> target;
    int n = word.size();
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (word[i] == target) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
