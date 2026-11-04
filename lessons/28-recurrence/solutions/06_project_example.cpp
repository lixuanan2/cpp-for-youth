#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int a[50] = {};
    a[1] = 1;
    for (int i = 2; i <= n; i++) {
        a[i] = a[i - 1] * 2 + 1;
    }
    for (int i = 1; i <= n; i++) {
        cout << "Day " << i << ": " << a[i] << endl;
    }
    return 0;
}
