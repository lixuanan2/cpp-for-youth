#include <iostream>
using namespace std;

void swapTwo(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 0, b = 0;
    cin >> a >> b;
    swapTwo(a, b);
    cout << a << " " << b << endl;
    return 0;
}
