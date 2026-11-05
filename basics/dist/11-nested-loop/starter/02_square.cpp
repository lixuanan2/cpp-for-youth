#include <iostream>
using namespace std;

int main() {
    int rows = 0, cols = 0;
    cin >> rows >> cols;
    for (int row = 1; row <= rows; row++) {
        for (int col = 1; col <= cols; col++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
