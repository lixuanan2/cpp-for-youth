#include <iostream>
using namespace std;

int absolute(int x) {
    if (x < 0) {
        return -x;
    }
    return x;
}

int main() {
    int x = 0;
    cin >> x;
    cout << absolute(x) << endl;
    return 0;
}
