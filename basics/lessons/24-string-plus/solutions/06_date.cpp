#include <iostream>
#include <string>
using namespace std;

int main() {
    string date;
    cin >> date;
    cout << date.substr(0, 4) << endl;
    cout << date.substr(5, 2) << endl;
    cout << date.substr(8, 2) << endl;
    return 0;
}
