#include <iostream>
using namespace std;

struct Record {
    int id;
    int score;
};

int main() {
    Record r = {101, 85};
    cout << r.id << endl;
    cout << r.score << endl;
    return 0;
}
