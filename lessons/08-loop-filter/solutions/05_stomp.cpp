#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 7 == 0) {
            cout << "Clap!" << endl;
        } else if (i % 10 == 7) {
            cout << "Stomp!" << endl;
        } else {
            cout << i << endl;
        }
    }
    return 0;
}
