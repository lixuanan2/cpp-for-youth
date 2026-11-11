#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 一直读到 0，存进 vector，再倒着输出。
    vector<int> v;
    int x = 0;
    cin >> x;
    while (x != 0) {
        v.push_back(x);
        cin >> x;
    }
    int n = v.size();
    for (int i = n - 1; i >= 0; i--) {
        cout << v[i] << endl;
    }
    return 0;
}
