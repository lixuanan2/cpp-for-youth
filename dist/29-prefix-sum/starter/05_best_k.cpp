#include <iostream>
using namespace std;

int main() {
    int n = 0, k = 0;
    cin >> n >> k;
    int a[101] = {};
    // TODO: find the biggest sum of k days in a row.
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    cout << a[1] << endl;
    return 0;
}
