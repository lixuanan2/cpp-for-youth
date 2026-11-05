#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int a[100] = {};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int k = 0;
    cin >> k;
    cout << "Song " << k << " plays " << a[k - 1] << " minutes." << endl;
    return 0;
}
