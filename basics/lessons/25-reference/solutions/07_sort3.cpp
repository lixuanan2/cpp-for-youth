#include <iostream>
using namespace std;

void swapTwo(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void sortThree(int &a, int &b, int &c) {
    if (a > b) {
        swapTwo(a, b);
    }
    if (b > c) {
        swapTwo(b, c);
    }
    if (a > b) {
        swapTwo(a, b);
    }
}

int main() {
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    sortThree(a, b, c);
    cout << a << " " << b << " " << c << endl;
    return 0;
}
