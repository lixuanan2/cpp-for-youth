#include <iostream>
using namespace std;

int bigger(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

int main() {
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    int larger = bigger(a, b);
    cout << bigger(larger, c) << endl;
    return 0;
}
