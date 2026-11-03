#include <iostream>
using namespace std;

int change(int x) {
    x++;
    return x;
}

int main() {
    int n = 0;
    cin >> n;
    change(n);
    cout << n << endl;
    return 0;
}
