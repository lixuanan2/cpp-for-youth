#include <iostream>
using namespace std;

int main() {
    int n = 0, k = 0;
    cin >> n >> k;
    int f[50] = {};
    f[0] = 1;
    for (int i = 1; i <= n; i++) {
        if (i == k) {
            f[i] = 0;
        } else if (i == 1) {
            f[i] = f[0];
        } else {
            f[i] = f[i - 1] + f[i - 2];
        }
    }
    cout << f[n] << endl;
    return 0;
}
