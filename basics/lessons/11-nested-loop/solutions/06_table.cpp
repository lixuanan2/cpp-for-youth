#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            cout << col << "x" << row;
            cout << "=" << col * row << " ";
        }
        cout << endl;
    }
    return 0;
}
