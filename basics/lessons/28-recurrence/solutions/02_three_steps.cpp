#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int f[50] = {};
    f[1] = 1;
    f[2] = 2;
    f[3] = 4;
    for (int i = 4; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2] + f[i - 3];
    }
    cout << f[n] << endl;
    return 0;
}
