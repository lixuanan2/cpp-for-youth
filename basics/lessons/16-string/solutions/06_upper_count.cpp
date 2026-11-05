#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;
    int n = word.size();
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (word[i] >= 'A' && word[i] <= 'Z') {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
