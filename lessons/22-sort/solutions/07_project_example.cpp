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
    cout << "Lowest: " << a[0] << endl;
    cout << "Highest: " << a[n - 1] << endl;
    cout << "Middle: " << a[n / 2] << endl;
    return 0;
}
