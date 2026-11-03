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
    int kinds = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] != a[i - 1]) {
            kinds++;
        }
    }
    cout << kinds << endl;
    return 0;
}
