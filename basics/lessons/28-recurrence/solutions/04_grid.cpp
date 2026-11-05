#include <iostream>
using namespace std;

int main() {
    int m = 0, n = 0;
    cin >> m >> n;
    int p[20][20] = {};
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || j == 0) {
                p[i][j] = 1;
            } else {
                p[i][j] = p[i - 1][j] + p[i][j - 1];
            }
        }
    }
    cout << p[m - 1][n - 1] << endl;
    return 0;
}
