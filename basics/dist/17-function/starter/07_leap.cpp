#include <iostream>
using namespace std;

bool leap(int y) {
    // TODO: change this line so it returns true only for leap years.
    return y == 0;
}

int main() {
    int a = 0, b = 0;
    cin >> a >> b;
    int count = 0;
    for (int y = a; y <= b; y++) {
        if (leap(y)) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
