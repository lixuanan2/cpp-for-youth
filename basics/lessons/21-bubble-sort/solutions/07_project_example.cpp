#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    if (n < 1 || n > 20) {
        cout << "n should be 1 to 20" << endl;
        return 0;
    }
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
    cout << "Lowest: " << a[0] << endl;
    cout << "Highest: " << a[n - 1] << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
