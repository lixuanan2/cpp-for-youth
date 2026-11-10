#include <iostream>
using namespace std;

int main() {
    int heads = 0, legs = 0;
    cin >> heads >> legs;
    // 鸡的只数每一种都试，算出兔子，再核对脚数。
    cout << heads << " " << legs << endl;
    return 0;
}
