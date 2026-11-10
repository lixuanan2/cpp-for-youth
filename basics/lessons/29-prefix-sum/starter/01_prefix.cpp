#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int a[101] = {};
    int s[101] = {};
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        // s[i] 是 a[1] 到 a[i] 的和。
    }
    for (int i = 1; i <= n; i++) {
        cout << s[i] << " ";
    }
    cout << endl;
    return 0;
}
