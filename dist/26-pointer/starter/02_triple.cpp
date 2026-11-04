#include <iostream>
using namespace std;

int main() {
    int x = 0;
    cin >> x;
    int *p = &x;
    cout << *p << endl;
    *p = *p + 1;
    cout << x << endl;
    return 0;
}
