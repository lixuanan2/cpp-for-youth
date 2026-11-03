#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int a[20] = {};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int pass = 0; pass < n - 1; pass++) {
        for (int j = 0; j < n - 1 - pass; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
