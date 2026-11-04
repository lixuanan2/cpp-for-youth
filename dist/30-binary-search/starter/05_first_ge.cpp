#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int a[100] = {};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int x = 0;
    cin >> x;
    int lo = 0, hi = n - 1;
    int ans = -1;
    // TODO: find the first position whose number is at least x, or -1.
    cout << lo << " " << hi << endl;
    cout << ans << endl;
    return 0;
}
