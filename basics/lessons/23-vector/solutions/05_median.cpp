#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;
    int x = 0;
    cin >> x;
    while (x != 0) {
        v.push_back(x);
        cin >> x;
    }
    sort(v.begin(), v.end());
    int n = v.size();
    cout << v[n / 2] << endl;
    return 0;
}
