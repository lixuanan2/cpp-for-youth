#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int a[100] = {};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int m = 0;
    cin >> m;
    int b[100] = {};
    for (int j = 0; j < m; j++) {
        cin >> b[j];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                found = true;
            }
        }
        if (found) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
