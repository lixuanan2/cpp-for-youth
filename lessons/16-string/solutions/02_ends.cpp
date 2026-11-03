#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;
    int n = word.size();
    cout << n << endl;
    cout << word[0] << endl;
    cout << word[n - 1] << endl;
    return 0;
}
