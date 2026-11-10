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
    // 输出分数最高的那张记录的编号。
    return 0;
}
