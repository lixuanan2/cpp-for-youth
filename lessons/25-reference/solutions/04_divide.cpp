#include <iostream>
using namespace std;

void divide(int a, int b, int &q, int &r) {
    q = a / b;
    r = a % b;
}

int main() {
    int a = 0, b = 0;
    cin >> a >> b;
    int q = 0, r = 0;
    divide(a, b, q, r);
    cout << q << " " << r << endl;
    return 0;
}
