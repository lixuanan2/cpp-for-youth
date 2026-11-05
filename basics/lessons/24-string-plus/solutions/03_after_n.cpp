#include <iostream>
#include <string>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    cin.ignore();
    string line;
    getline(cin, line);
    cout << n << " " << line << endl;
    return 0;
}
