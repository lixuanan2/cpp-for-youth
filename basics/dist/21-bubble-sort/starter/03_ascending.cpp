#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int a[20] = {};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // 用冒泡排序把 a 从小到大排好，再输出。
    return 0;
}
