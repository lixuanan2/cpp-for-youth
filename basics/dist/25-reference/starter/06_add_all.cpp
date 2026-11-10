#include <iostream>
#include <vector>
using namespace std;

// 在这里写 void addAll(vector<int> &v, int k)，给每个数加上 k。

int main() {
    int n = 0;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x = 0;
        cin >> x;
        v.push_back(x);
    }
    // 调用 addAll(v, 10)。
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
