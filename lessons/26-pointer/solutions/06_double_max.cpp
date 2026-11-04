#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    int *p = &a;
    if (b > *p) {
        p = &b;
    }
    if (c > *p) {
        p = &c;
    }
    *p = *p * 2;
    cout << a << " " << b << " " << c << endl;
    return 0;
}
