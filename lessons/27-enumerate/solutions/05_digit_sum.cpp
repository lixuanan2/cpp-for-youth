#include <iostream>
using namespace std;

int main() {
    int n = 0, k = 0;
    cin >> n >> k;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        int s = 0;
        int x = i;
        while (x > 0) {
            s = s + x % 10;
            x = x / 10;
        }
        if (s == k) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
