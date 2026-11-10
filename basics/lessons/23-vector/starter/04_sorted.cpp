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
    // 把 vector 排好，再在一行里输出。
    return 0;
}
