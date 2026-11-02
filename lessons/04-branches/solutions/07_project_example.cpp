#include <iostream>
using namespace std;

int main() {
    int battery = 0;
    cin >> battery;
    if (battery >= 80) {
        cout << "Full power" << endl;
    } else if (battery >= 20) {
        cout << "Keep going" << endl;
    } else {
        cout << "Charge me" << endl;
    }
    return 0;
}
