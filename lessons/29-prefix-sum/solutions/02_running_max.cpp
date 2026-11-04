#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int a[101] = {};
    int m[101] = {};
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    m[1] = a[1];
    for (int i = 2; i <= n; i++) {
        m[i] = m[i - 1];
        if (a[i] > m[i]) {
            m[i] = a[i];
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << m[i] << " ";
    }
    cout << endl;
    return 0;
}
