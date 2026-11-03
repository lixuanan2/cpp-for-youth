#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;
    int n = word.size();
    for (int i = 0; i < n; i++) {
        cout << word[i] << endl;
    }
    return 0;
}
