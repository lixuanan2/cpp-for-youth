#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int ways = 0;
    for (int five = 0; five * 5 <= n; five++) {
        int rest = n - five * 5;
        if (rest % 2 == 0) {
            ways++;
        }
    }
    cout << ways << endl;
    return 0;
}
