#include <iostream>
using namespace std;

int main() {
    char ch = 0;
    int n = 0;
    cin >> ch >> n;
    cout << char((ch - 'A' + n) % 26 + 'A') << endl;
    return 0;
}
