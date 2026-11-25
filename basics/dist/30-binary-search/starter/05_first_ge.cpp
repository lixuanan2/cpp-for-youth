// 【第一个够高的】
// 第一行读入 n（1 到 100），第二行读入 n 个同学的身高（厘米），
//   从矮到高排好，可以有相同的；第三行读入过山车要的身高 x。
// 用二分找出第一个大于等于 x 的身高，输出它是第几个；一个都没有，
//   输出 -1。
// 例如输入（每个一行）：5、110 120 120 135 140、120
// 应该输出：2
// ↓ 从这里开始写

#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int a[100] = {};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int x = 0;
    cin >> x;
    int lo = 0, hi = n - 1;
    int ans = -1;
    cout << lo << " " << hi << endl;
    cout << ans << endl;
    return 0;
}
