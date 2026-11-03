#include <iostream>
using namespace std;

int twice(int x) {
    return x * 2;
}

int main() {
    int n = 0;
    cin >> n;
    n = twice(n);
    n = twice(n);
    cout << n << endl;
    return 0;
}
