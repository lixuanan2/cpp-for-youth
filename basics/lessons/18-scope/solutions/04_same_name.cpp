#include <iostream>
using namespace std;

int f() {
    int x = 100;
    return x;
}

int main() {
    int x = 1;
    f();
    cout << x << endl;
    return 0;
}
