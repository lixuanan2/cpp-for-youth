#include <iostream>
#include <string>
using namespace std;

int main() {
    // 用一个空格把两个单词拼起来，输出拼好的和它的长度。
    string first, last;
    cin >> first >> last;
    string full = first + " " + last;
    cout << full << endl;
    cout << full.size() << endl;
    return 0;
}
