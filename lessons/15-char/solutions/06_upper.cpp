#include <iostream>
using namespace std;

int main() {
    char ch = 0;
    cin >> ch;
    cout << char(ch - 'a' + 'A') << endl;
    return 0;
}
