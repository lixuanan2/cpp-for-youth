#include <iostream>
using namespace std;

int main() {
    int score = 0;
    cin >> score;
    if (score >= 70 && score <= 79) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
