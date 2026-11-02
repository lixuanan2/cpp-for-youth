#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int total = 0;
    for (int i = 1; i <= n; i++) {
        int x = 0;
        cin >> x;
        total += x;
    }
    cout << total * 1.0 / n << endl;
    return 0;
}
