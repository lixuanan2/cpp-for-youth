#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int total = 0;
    for (int i = 1; i <= n; i++) {
        total = 0;
        total += i;
    }
    cout << total << endl;
    return 0;
}
