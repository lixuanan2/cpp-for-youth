#include <iostream>
using namespace std;

int feed(int hunger) {
    if (hunger >= 3) {
        return hunger - 3;
    }
    return 0;
}

int main() {
    int hunger = 0, meals = 0;
    cin >> hunger >> meals;
    for (int i = 1; i <= meals; i++) {
        hunger = feed(hunger);
        cout << "Hunger: " << hunger << endl;
    }
    return 0;
}
