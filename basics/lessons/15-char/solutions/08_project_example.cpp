#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        char ch = 0;
        cin >> ch;
        cout << char(ch + 1);
    }
    cout << endl;
    return 0;
}
