#include <iostream>
using namespace std;

int bigger(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

int main() {
    int a = 0, b = 0;
    cin >> a >> b;
    cout << bigger(a, b) << endl;
    return 0;
}
