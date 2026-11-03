#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    getline(cin, name);
    string card = "*** " + name + " ***";
    cout << card << endl;
    cout << "Letters: " << name.size() << endl;
    return 0;
}
