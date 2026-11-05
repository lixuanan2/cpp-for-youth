#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int a[100] = {};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int total = 0;
    for (int i = 1; i < n - 1; i++) {
        total += a[i];
    }
    cout << total * 1.0 / (n - 2) << endl;
    return 0;
}
