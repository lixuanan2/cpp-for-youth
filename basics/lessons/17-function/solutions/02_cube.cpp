#include <iostream>
using namespace std;

int cube(int x) {
    return x * x * x;
}

int main() {
    int n = 0;
    cin >> n;
    int result = cube(n);
    cout << result << endl;
    return 0;
}
