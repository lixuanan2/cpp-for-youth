#include <iostream>
#include <string>
using namespace std;

int main() {
    // 输出单词的前三个字母。
    string word;
    cin >> word;
    cout << word.substr(0, 3) << endl;
    return 0;
}
