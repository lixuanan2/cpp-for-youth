#include <iostream>
using namespace std;

int main() {
    int r = 0, c = 0;
    cin >> r >> c;
    if (r < 1 || r > 5 || c < 1 || c > 5) {
        cout << "r and c should be 1 to 5" << endl;
        return 0;
    }
    int a[5][5] = {};
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (a[i][j] == 1) {
                cout << "#";
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}
