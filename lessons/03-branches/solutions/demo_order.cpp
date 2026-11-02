#include <iostream>
using namespace std;

int main() {
    int score = 0;
    cin >> score;
    if (score >= 60) {
        cout << "Pass" << endl;
    } else if (score >= 90) {
        cout << "Excellent" << endl;
    } else {
        cout << "Retry" << endl;
    }
    return 0;
}
