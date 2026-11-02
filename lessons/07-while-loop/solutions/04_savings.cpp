#include <iostream>
using namespace std;

int main() {
    int a = 0, d = 0, b = 0;
    cin >> a >> d >> b;
    int day = 0;
    while (a < b) {
        a += d;
        day++;
    }
    cout << day << endl;
    return 0;
}
