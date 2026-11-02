#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int best = 0;
    cin >> best;
    int pos = 1;
    for (int i = 2; i <= n; i++) {
        int x = 0;
        cin >> x;
        if (x < best) {
            best = x;
            pos = i;
        }
    }
    cout << best << endl;
    cout << pos << endl;
    return 0;
}
