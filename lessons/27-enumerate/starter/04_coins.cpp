#include <iostream>
using namespace std;

int main() {
    int heads = 0, legs = 0;
    cin >> heads >> legs;
    bool found = false;
    for (int c = 0; c <= heads; c++) {
        int r = heads - c;
        if (2 * c + 4 * r == legs) {
            cout << c << " " << r << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "No answer" << endl;
    }
    return 0;
}
