#include <iostream>
using namespace std;

int main() {
    int guess = 0;
    while (guess != 7) {
        cout << "Password?" << endl;
        cin >> guess;
    }
    cout << "Open!" << endl;
    return 0;
}
