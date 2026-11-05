#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int a[100] = {};
    int total = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] * 1.0 > total * 1.0 / n) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
