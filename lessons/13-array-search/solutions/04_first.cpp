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
    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == x && pos == -1) {
            pos = i;
        }
    }
    cout << pos << endl;
    return 0;
}
