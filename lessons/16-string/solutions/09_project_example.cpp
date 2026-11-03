#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;
    int n = word.size();
    cout << word[0];
    for (int i = 1; i < n; i++) {
        cout << "_";
    }
    cout << endl;
    cout << n << " letters" << endl;
    return 0;
}
