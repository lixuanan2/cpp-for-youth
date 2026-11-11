#include <iostream>
#include <string>
using namespace std;

int main() {
    // 这一行里有 cat 输出 Found，否则输出 Not found。
    string line;
    getline(cin, line);
    if (line.find("cat") != string::npos) {
        cout << "Found" << endl;
    } else {
        cout << "Not found" << endl;
    }
    return 0;
}
