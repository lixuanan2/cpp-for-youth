#include <iostream>
using namespace std;

int main() {
    int temperature = 0, rain = 0;
    cin >> temperature >> rain;
    if (temperature >= 15 && rain == 0) {
        cout << "Go outside" << endl;
    } else {
        cout << "Stay home" << endl;
    }
    return 0;
}
