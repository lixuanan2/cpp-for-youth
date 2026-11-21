#include <iostream>
using namespace std;

int main() {
    int age = 0;
    cin >> age;
    if (age >= 6 && age <= 12) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
