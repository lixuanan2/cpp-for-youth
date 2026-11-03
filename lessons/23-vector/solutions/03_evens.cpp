#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int x = 0;
    cin >> x;
    while (x != 0) {
        if (x % 2 == 0) {
            v.push_back(x);
        }
        cin >> x;
    }
    int n = v.size();
    for (int i = 0; i < n; i++) {
        cout << v[i] << endl;
    }
    return 0;
}
