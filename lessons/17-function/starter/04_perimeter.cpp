#include <iostream>
using namespace std;

int diff(int a, int b) {
    return a - b;
}

int main() {
    int a = 0, b = 0;
    cin >> a >> b;
    cout << diff(a, b) << endl;
    return 0;
}
