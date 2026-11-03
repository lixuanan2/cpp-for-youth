#include <iostream>
using namespace std;

int grow(int h) {
    return h + h / 2;
}

int main() {
    int h = 0, d = 0;
    cin >> h >> d;
    for (int i = 1; i <= d; i++) {
        h = grow(h);
    }
    cout << h << endl;
    return 0;
}
