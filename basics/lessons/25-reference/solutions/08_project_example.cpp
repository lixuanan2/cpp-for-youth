#include <iostream>
using namespace std;

void levelUp(int &hp, int &atk) {
    hp = hp + 20;
    atk = atk + 5;
}

int main() {
    int hp = 0, atk = 0;
    cin >> hp >> atk;
    levelUp(hp, atk);
    levelUp(hp, atk);
    cout << "HP " << hp << endl;
    cout << "ATK " << atk << endl;
    return 0;
}
