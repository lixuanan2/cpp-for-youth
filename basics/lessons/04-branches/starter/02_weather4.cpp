#include <iostream>
using namespace std;

int main() {
    int t = 0;
    cin >> t;
    if (t >= 30) {
        cout << "Hot" << endl;
    } else if (t >= 15) {
        cout << "Warm" << endl;
    } else {
        cout << "Cold" << endl;
    }
    return 0;
}
