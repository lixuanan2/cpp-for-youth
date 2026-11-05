#include <iostream>
#include <string>
using namespace std;

int main() {
    string phone;
    cin >> phone;
    string masked = phone.substr(0, 3) + "****" + phone.substr(7, 4);
    cout << masked << endl;
    return 0;
}
