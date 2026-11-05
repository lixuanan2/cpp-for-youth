#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int x = 0;
    cin >> x;
    while (x != 0) {
        v.push_back(x);
        cin >> x;
    }
    int n = v.size();
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += v[i];
    }
    cout << n << endl;
    cout << total << endl;
    return 0;
}
