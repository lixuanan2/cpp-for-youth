#include <iostream>
using namespace std;

int square(int x) {
    return x * x;
}

int main() {
    int n = 0;
    cin >> n;
    int result = square(n);
    cout << result << endl;
    return 0;
}
