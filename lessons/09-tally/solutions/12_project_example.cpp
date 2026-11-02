#include <iostream>
using namespace std;

int main() {
    int x = 0;
    int total = 0;
    int count = 0;
    cin >> x;
    while (x != 0) {
        total += x;
        count++;
        cin >> x;
    }
    cout << count << " times" << endl;
    cout << total << " yuan" << endl;
    return 0;
}
