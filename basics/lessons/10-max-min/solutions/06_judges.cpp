#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int high = 0;
    cin >> high;
    int low = high;
    int total = high;
    for (int i = 2; i <= n; i++) {
        int x = 0;
        cin >> x;
        total += x;
        if (x > high) {
            high = x;
        }
        if (x < low) {
            low = x;
        }
    }
    cout << (total - high - low) * 1.0 / (n - 2) << endl;
    return 0;
}
