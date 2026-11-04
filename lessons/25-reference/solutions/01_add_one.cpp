#include <iostream>
using namespace std;

void addOne(int &x) {
    x = x + 1;
}

int main() {
    int x = 0;
    cin >> x;
    addOne(x);
    cout << x << endl;
    return 0;
}
