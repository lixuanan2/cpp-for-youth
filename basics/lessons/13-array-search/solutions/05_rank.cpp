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
    int rank = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == x && rank == 0) {
            rank = i + 1;
        }
    }
    cout << rank << endl;
    return 0;
}
