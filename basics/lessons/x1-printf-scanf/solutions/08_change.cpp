#include <cstdio>
using namespace std;

int main() {
    double paid = 0, price = 0;
    int n = 0;
    scanf("%lf %lf %d", &paid, &price, &n);
    printf("%.2f\n", paid - price * n);
    return 0;
}
