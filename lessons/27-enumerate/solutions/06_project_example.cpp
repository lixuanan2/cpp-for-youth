#include <iostream>
using namespace std;

int main() {
    int total = 0;
    for (int a = 0; a <= 9; a++) {
        for (int b = 0; b <= 9; b++) {
            for (int c = 0; c <= 9; c++) {
                if (a + b + c == 10 && a > c) {
                    total++;
                }
            }
        }
    }
    cout << "Codes: " << total << endl;
    return 0;
}
