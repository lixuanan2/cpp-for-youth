#include <cstdio>
using namespace std;

int main() {
    double price = 0;
    int n = 0;
    scanf("%lf %d", &price, &n);
    printf("%.2f\n", price * n);
    return 0;
}
