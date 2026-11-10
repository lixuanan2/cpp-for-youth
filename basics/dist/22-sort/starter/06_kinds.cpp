// 【有几种不同的数】
// 第一行读入 n（1 到 100），第二行读入 n 个整数（-1000 到 1000）。
// 一样的数只算一种，输出一共有几种不同的数。
// 例如输入（每个一行）：6、3 1 3 2 1 3
// 应该输出：3
// ↓ 从这里开始写

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int a[100] = {};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    return 0;
}
