#include <iostream>
#include <string>
using namespace std;

int main() {
    // 读入一整行，输出这一行和它的长度。
    string line;
    getline(cin, line);
    cout << line << endl;
    cout << line.size() << endl;
    return 0;
}
