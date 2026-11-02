#include <iostream>
using namespace std;

int main() {
    int score = 0;
    cin >> score;
    if (score >= 60 && score < 90) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
