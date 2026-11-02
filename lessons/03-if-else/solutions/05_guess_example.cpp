#include <iostream>
using namespace std;

int main() {
    int secret = 7;
    int guess = 0;
    cin >> guess;
    if (guess == secret) {
        cout << "You got it" << endl;
    } else {
        cout << "Try again" << endl;
    }
    return 0;
}
