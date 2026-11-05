#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int total = 0;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            total += i;
            count++;
        }
    }
    cout << total << endl;
    cout << count << endl;
    return 0;
}
