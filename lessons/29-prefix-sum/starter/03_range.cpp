#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int a[101] = {};
    int s[101] = {};
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }
    int q = 0;
    cin >> q;
    for (int k = 0; k < q; k++) {
        int l = 0, r = 0;
        cin >> l >> r;
        // TODO: print the sum of a[l] up to a[r] using s.
        cout << l << " " << r << endl;
    }
    return 0;
}
