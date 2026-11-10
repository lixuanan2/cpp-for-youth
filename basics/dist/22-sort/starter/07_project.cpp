// 【排好再用】
// 读入一串数，用 sort 排好，再用排好的结果做一件有意思的事。
//   主题你自己定。
// 先做到：用 sort 排好，输出最小、最大和中间那个。
//   偶数个时说清取哪一个。
// 选你喜欢的：身高排队、零花钱排名、游戏积分榜、跳绳前三名，
//   都可以。
// 还想更厉害：同时输出从小到大和从大到小两种排法。
// ↓ 从这里开始造

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
