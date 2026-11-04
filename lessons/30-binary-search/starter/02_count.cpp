#include <iostream>
using namespace std;

int main() {
    int n = 0, s = 0;
    cin >> n >> s;
    int lo = 1, hi = n;
    int mid = 0;
    while (mid != s) {
        mid = (lo + hi) / 2;
        cout << mid << endl;
        if (mid < s) {
            lo = mid + 1;
        } else if (mid > s) {
            hi = mid - 1;
        }
    }
    return 0;
}
