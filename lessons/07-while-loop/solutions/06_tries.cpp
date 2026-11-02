#include <iostream>
using namespace std;

int main() {
    int guess = 0;
    int tries = 0;
    while (guess != 7) {
        cout << "Password?" << endl;
        cin >> guess;
        tries++;
    }
    cout << "Open!" << endl;
    cout << tries << endl;
    return 0;
}
