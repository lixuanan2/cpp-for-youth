#include <iostream>
using namespace std;

int countdown(int n) {
    if (n == 0) {
        cout << "Go!" << endl;
        return 0;
    }
    cout << n << endl;
    return countdown(n - 1);
}

int main() {
    int n = 0;
    cin >> n;
    countdown(n);
    return 0;
}
