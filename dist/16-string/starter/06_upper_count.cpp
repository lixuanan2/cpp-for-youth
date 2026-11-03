#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    char target = 0;
    cin >> word >> target;
    int n = word.size();
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (word[i] == target) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
