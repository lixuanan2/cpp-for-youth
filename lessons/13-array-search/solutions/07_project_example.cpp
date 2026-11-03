#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int a[100] = {};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int x = 0;
    cin >> x;
    while (x != 0) {
        bool found = false;
        for (int i = 0; i < n; i++) {
            if (a[i] == x) {
                found = true;
            }
        }
        if (found) {
            cout << x << " is here." << endl;
        } else {
            cout << x << " is absent." << endl;
        }
        cin >> x;
    }
    return 0;
}
