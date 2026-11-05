#include <iostream>
#include <string>
using namespace std;

int main() {
    string first, last;
    cin >> first >> last;
    string full = first + " " + last;
    cout << full << endl;
    cout << full.size() << endl;
    return 0;
}
