#include <iostream>
using namespace std;

void swapPtr(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 0, y = 0;
    cin >> x >> y;
    swapPtr(&x, &y);
    cout << x << " " << y << endl;
    return 0;
}
