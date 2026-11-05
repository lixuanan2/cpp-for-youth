#include <iostream>
using namespace std;

void minMax(int a, int b, int c, int &lo, int &hi) {
    lo = a;
    hi = a;
    if (b < lo) {
        lo = b;
    }
    if (c < lo) {
        lo = c;
    }
    if (b > hi) {
        hi = b;
    }
    if (c > hi) {
        hi = c;
    }
}

int main() {
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    int lo = 0, hi = 0;
    minMax(a, b, c, lo, hi);
    cout << lo << " " << hi << endl;
    return 0;
}
