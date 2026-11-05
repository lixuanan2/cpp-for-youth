#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int a[101] = {};
    int c[101] = {};
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        c[i] = c[i - 1];
        if (a[i] % 2 == 0) {
            c[i]++;
        }
    }
    int q = 0;
    cin >> q;
    for (int k = 0; k < q; k++) {
        int l = 0, r = 0;
        cin >> l >> r;
        cout << c[r] - c[l - 1] << endl;
    }
    return 0;
}
