#include <iostream>
using namespace std;

int squareSum(int n) {
    if (n == 0) {
        return 0;
    }
    return n * n + squareSum(n - 1);
}

int main() {
    int n = 0;
    cin >> n;
    cout << squareSum(n) << endl;
    return 0;
}
