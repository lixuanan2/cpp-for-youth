// 【找零多少？】
// 一行读入付的钱、单价（都可能是小数）和买的个数（整数），
//   用 printf 输出找零，保留两位小数。
// 例如输入：20 3.5 4
// 应该输出：6.00
// ↓ 在下面这段程序上改

#include <cstdio>
using namespace std;

int main() {
    double price = 0;
    int n = 0;
    scanf("%lf %d", &price, &n);
    printf("%.2f\n", price * n);
    return 0;
}
