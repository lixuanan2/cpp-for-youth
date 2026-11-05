#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;
    if (word == "open") {
        cout << "Welcome!" << endl;
    } else {
        cout << "Wrong." << endl;
    }
    return 0;
}
