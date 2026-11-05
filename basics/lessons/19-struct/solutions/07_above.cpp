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
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += s[i].score;
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (s[i].score * n > total) {
            cout << s[i].id << endl;
            count++;
        }
    }
    if (count == 0) {
        cout << "None" << endl;
    }
    return 0;
}
