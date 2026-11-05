#include <iostream>
using namespace std;

struct Record {
    int id;
    int score;
};

int main() {
    Record r;
    cin >> r.id >> r.score;
    r.score += 5;
    cout << r.id << " " << r.score << endl;
    return 0;
}
