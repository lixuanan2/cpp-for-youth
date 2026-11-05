#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;
    int n = word.size();
    bool same = true;
    for (int i = 0; i < n; i++) {
        if (word[i] != word[n - 1 - i]) {
            same = false;
        }
    }
    if (same) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
