#include <cstdio>
using namespace std;

int main() {
    int h = 0, m = 0, k = 0;
    scanf("%d:%d %d", &h, &m, &k);
    int total = h * 60 + m + k;
    printf("%02d:%02d\n", total / 60, total % 60);
    return 0;
}
