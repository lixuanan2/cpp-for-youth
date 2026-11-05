#include <iostream>
using namespace std;

int main() {
    int age = 0;
    cin >> age;
    if (age < 6) {
        cout << 0 << endl;
    } else if (age < 18) {
        cout << 30 << endl;
    } else if (age < 60) {
        cout << 60 << endl;
    } else {
        cout << 20 << endl;
    }
    return 0;
}
