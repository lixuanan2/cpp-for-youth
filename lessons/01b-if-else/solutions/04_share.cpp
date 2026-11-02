#include <iostream>
using namespace std;

int main() {
    int apples = 0, people = 0;
    cin >> apples >> people;
    if (apples % people == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
