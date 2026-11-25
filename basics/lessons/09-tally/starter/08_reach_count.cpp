#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
