#include <iostream>
using namespace std;

int oddSum(int n) {
    if (n == 0) {
        return 0;
    }
    if (n % 2 == 1) {
        return n + oddSum(n - 1);
    }
    return oddSum(n - 1);
}

int main() {
    int n = 0;
    cin >> n;
    cout << oddSum(n) << endl;
    return 0;
}
