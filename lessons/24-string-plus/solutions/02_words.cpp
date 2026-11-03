#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    getline(cin, line);
    int n = line.size();
    int spaces = 0;
    for (int i = 0; i < n; i++) {
        if (line[i] == ' ') {
            spaces++;
        }
    }
    cout << spaces + 1 << endl;
    return 0;
}
