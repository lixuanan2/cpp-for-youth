#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int f[50] = {};
    f[1] = 1;
    f[2] = 2;
    for (int i = 3; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
    cout << f[n] << endl;
    return 0;
}
