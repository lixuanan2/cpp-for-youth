#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    if (n < 1 || n > 30) {
        cout << "n should be 1 to 30" << endl;
        return 0;
    }
    int a[31] = {};
    a[1] = 1;
    for (int i = 2; i <= n; i++) {
        a[i] = a[i - 1] * 2 + 1;
    }
    for (int i = 1; i <= n; i++) {
        cout << "Day " << i << ": " << a[i] << endl;
    }
    return 0;
}
