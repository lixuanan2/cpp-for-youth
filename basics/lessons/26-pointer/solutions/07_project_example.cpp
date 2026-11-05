#include <iostream>
using namespace std;

int main() {
    int apples = 0, pears = 0;
    cin >> apples >> pears;
    int *basket = &apples;
    if (pears < apples) {
        basket = &pears;
    }
    *basket = *basket + 5;
    cout << "Apples " << apples << endl;
    cout << "Pears " << pears << endl;
    return 0;
}
