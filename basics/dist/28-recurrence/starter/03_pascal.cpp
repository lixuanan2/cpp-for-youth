#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int c[20][20] = {};
    // 每一行都由上一行算出来，再输出。
    cout << c[0][0] << endl;
    return 0;
}
