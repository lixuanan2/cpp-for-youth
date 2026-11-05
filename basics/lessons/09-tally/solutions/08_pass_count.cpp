#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        int x = 0;
        cin >> x;
        if (x >= 60) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
