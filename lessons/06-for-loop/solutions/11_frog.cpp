#include <iostream>
using namespace std;

int main() {
    int a = 0, d = 0, n = 0;
    cin >> a >> d >> n;
    for (int i = 1; i <= n; i++) {
        a = a + d;
        cout << a << endl;
    }
    return 0;
}
