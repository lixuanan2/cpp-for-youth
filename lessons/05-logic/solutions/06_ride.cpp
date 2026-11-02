#include <iostream>
using namespace std;

int main() {
    int height = 0, age = 0, adult = 0;
    cin >> height >> age >> adult;
    if (height >= 120 && (age >= 10 || adult == 1)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
