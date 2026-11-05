#include <iostream>
using namespace std;

int main() {
    int x = 0;
    cin >> x;
    int *p = &x;
    *p = *p * 3;
    cout << x << endl;
    return 0;
}
