#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int a[100] = {};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
