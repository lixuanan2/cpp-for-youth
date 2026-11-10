#include <iostream>
using namespace std;

int main() {
    int n = 0, s = 0;
    cin >> n >> s;
    int lo = 1, hi = n;
    int mid = 0;
    // 一直猜 lo 和 hi 的中间，直到 mid 是 s，每次猜都输出。
    cout << lo << " " << hi << " " << mid << endl;
    return 0;
}
