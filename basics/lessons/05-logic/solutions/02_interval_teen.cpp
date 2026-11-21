#include <iostream>
using namespace std;

int main() {
    int age = 0;
    cin >> age;
    if (age >= 13 && age <= 15) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
