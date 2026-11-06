#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    if (n < 1 || n > 100) {
        cout << "n should be 1 to 100" << endl;
        return 0;
    }
    int a[101] = {};
    int s[101] = {};
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }
    for (int i = 1; i <= n; i++) {
        cout << "Day " << i << ": " << s[i];
        if (s[i] >= 100 && s[i - 1] < 100) {
            cout << " Goal!";
        }
        cout << endl;
    }
    return 0;
}
