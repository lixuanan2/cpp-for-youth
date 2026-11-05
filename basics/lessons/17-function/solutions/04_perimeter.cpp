#include <iostream>
using namespace std;

int perimeter(int w, int h) {
    return 2 * (w + h);
}

int main() {
    int w = 0, h = 0;
    cin >> w >> h;
    cout << perimeter(w, h) << endl;
    return 0;
}
