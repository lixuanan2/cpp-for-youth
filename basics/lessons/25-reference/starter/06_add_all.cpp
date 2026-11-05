#include <iostream>
#include <vector>
using namespace std;

// TODO: write void addAll(vector<int> &v, int k) that adds k to every number.

int main() {
    int n = 0;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x = 0;
        cin >> x;
        v.push_back(x);
    }
    // TODO: call addAll(v, 10).
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
