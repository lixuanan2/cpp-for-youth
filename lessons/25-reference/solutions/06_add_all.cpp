#include <iostream>
#include <vector>
using namespace std;

void addAll(vector<int> &v, int k) {
    int n = v.size();
    for (int i = 0; i < n; i++) {
        v[i] = v[i] + k;
    }
}

int main() {
    int n = 0;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x = 0;
        cin >> x;
        v.push_back(x);
    }
    addAll(v, 10);
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
