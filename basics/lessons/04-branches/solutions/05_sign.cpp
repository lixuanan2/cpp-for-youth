#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    if (n > 0) {
        cout << "positive" << endl;
    } else if (n == 0) {
        cout << "zero" << endl;
    } else {
        cout << "negative" << endl;
    }
    return 0;
}
