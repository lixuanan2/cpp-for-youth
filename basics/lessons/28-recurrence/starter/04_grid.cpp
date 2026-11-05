#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int c[20][20] = {};
    for (int i = 0; i < n; i++) {
        c[i][0] = 1;
        c[i][i] = 1;
        for (int j = 1; j < i; j++) {
            int left = c[i - 1][j - 1];
            int right = c[i - 1][j];
            c[i][j] = left + right;
        }
        for (int j = 0; j <= i; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
