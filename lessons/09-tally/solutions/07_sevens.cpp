#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 7 == 0) {
            cout << i << endl;
            count++;
        }
    }
    if (count == 0) {
        cout << "None" << endl;
    }
    return 0;
}
