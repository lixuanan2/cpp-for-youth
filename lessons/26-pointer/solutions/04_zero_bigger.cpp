#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 0;
    cin >> a >> b;
    int *p = &a;
    if (b > a) {
        p = &b;
    }
    *p = 0;
    cout << a << " " << b << endl;
    return 0;
}
