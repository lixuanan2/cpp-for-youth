#include <iostream>
using namespace std;

int toF(int c) {
    return c * 9 / 5 + 32;
}

int toC(int f) {
    return (f - 32) * 5 / 9;
}

int main() {
    int c = 0;
    cin >> c;
    cout << toF(c) << endl;
    cout << toC(toF(c)) << endl;
    return 0;
}
