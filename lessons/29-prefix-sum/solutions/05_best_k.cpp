#include <iostream>
using namespace std;

int main() {
    int n = 0, k = 0;
    cin >> n >> k;
    int a[101] = {};
    int s[101] = {};
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }
    int best = s[k];
    for (int i = k + 1; i <= n; i++) {
        if (s[i] - s[i - k] > best) {
            best = s[i] - s[i - k];
        }
    }
    cout << best << endl;
    return 0;
}
