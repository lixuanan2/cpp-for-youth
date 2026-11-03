#include <iostream>
using namespace std;

int main() {
    int r = 0, c = 0;
    cin >> r >> c;
    int a[5][5] = {};
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }
    for (int j = 0; j < c; j++) {
        int total = 0;
        for (int i = 0; i < r; i++) {
            total += a[i][j];
        }
        cout << total << endl;
    }
    return 0;
}
