#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n = 0, k = 0;
    cin >> n >> k;
    int a[100] = {};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    cout << a[k - 1] << endl;
    return 0;
}
