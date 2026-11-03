#include <iostream>
using namespace std;

struct Record {
    int id;
    int score;
};

int main() {
    Record a, b;
    cin >> a.id >> a.score;
    cin >> b.id >> b.score;
    if (a.score > b.score) {
        cout << a.id << endl;
    } else if (b.score > a.score) {
        cout << b.id << endl;
    } else {
        cout << "Tie" << endl;
    }
    return 0;
}
