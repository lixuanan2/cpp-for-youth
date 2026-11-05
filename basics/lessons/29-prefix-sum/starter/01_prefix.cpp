#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int a[101] = {};
    int s[101] = {};
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        // TODO: s[i] is the sum of a[1] up to a[i].
    }
    for (int i = 1; i <= n; i++) {
        cout << s[i] << " ";
    }
    cout << endl;
    return 0;
}
