#include <iostream>
using namespace std;

int main() {
    int score = 0;
    cin >> score;
    if (!(score >= 60)) {
        cout << "Retry" << endl;
    } else {
        cout << "Pass" << endl;
    }
    return 0;
}
