#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n; col++) {
            if ((row + col) % 2 == 0) {
                cout << "#";
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}
