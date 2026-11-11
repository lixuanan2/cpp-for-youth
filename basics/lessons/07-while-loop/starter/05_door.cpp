#include <iostream>
using namespace std;

int main() {
    // guess 不是 7 就一直问，猜对了输出 Open!
    int guess = 0;
    while (guess != 7) {
        cout << "Password?" << endl;
        cin >> guess;
    }
    cout << "Open!" << endl;
    return 0;
}
