#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int high = 0;
    cin >> high;
    int low = high;
    for (int i = 2; i <= n; i++) {
        int x = 0;
        cin >> x;
        if (x > high) {
            high = x;
        }
        if (x < low) {
            low = x;
        }
    }
    cout << high - low << endl;
    return 0;
}
