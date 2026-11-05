#include <iostream>
using namespace std;

struct Record {
    int id;
    int score;
};

int main() {
    int n = 0;
    cin >> n;
    Record s[100];
    for (int i = 0; i < n; i++) {
        cin >> s[i].id >> s[i].score;
    }
    int best = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].score > s[best].score) {
            best = i;
        }
    }
    cout << s[best].id << endl;
    return 0;
}
