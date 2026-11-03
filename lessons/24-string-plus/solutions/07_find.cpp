#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    getline(cin, line);
    if (line.find("cat") != string::npos) {
        cout << "Found" << endl;
    } else {
        cout << "Not found" << endl;
    }
    return 0;
}
