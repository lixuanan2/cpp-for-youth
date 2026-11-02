#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0) {
            cout << "Level " << i << ": Boss!" << endl;
        } else {
            cout << "Level " << i << ": Coin" << endl;
        }
    }
    return 0;
}
