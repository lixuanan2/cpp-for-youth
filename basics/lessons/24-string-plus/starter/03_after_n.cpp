#include <iostream>
#include <string>
using namespace std;

int main() {
    // 读入 n，再把下一整行正确读进来。
    int n = 0;
    cin >> n;
    cin.ignore();
    string line;
    getline(cin, line);
    cout << n << " " << line << endl;
    return 0;
}
