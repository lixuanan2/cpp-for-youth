#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    if (n < 1 || n > 100) {
        cout << "n should be 1 to 100" << endl;
        return 0;
    }
    int a[100] = {};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int k = 0;
    cin >> k;
    if (k < 1 || k > n) {
        cout << "Pick a song from 1 to " << n << endl;
        return 0;
    }
    cout << "Song " << k << " plays " << a[k - 1] << " minutes." << endl;
    return 0;
}
