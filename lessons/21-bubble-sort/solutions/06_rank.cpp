#include <iostream>
using namespace std;

struct Record {
    int id;
    int score;
};

int main() {
    int n = 0;
    cin >> n;
    Record s[20];
    for (int i = 0; i < n; i++) {
        cin >> s[i].id >> s[i].score;
    }
    for (int pass = 0; pass < n - 1; pass++) {
        for (int j = 0; j < n - 1 - pass; j++) {
            if (s[j].score < s[j + 1].score) {
                Record temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << s[i].id << endl;
    }
    return 0;
}
