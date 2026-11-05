#include <iostream>
using namespace std;

int addOne(int x) {
    return x + 1;
}

int main() {
    int n = 0;
    cin >> n;
    n = addOne(n);
    cout << n << endl;
    return 0;
}
