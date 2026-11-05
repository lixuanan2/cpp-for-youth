#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    if (n % 2 == 0 && n % 3 == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
