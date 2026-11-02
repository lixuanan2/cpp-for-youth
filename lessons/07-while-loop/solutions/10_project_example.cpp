#include <iostream>
using namespace std;

int main() {
    int battery = 0;
    cin >> battery;
    int hours = 0;
    while (battery > 0) {
        cout << "Battery: " << battery << endl;
        battery -= 30;
        hours++;
    }
    cout << "Empty after " << hours << " hours." << endl;
    return 0;
}
