#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int total = 0;
    int count = 0;
    while (n > 0) {
        total += n % 10;
        count++;
        n /= 10;
    }
    cout << count << endl;
    cout << total << endl;
    return 0;
}
