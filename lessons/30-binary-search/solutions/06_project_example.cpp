#include <iostream>
using namespace std;

int main() {
    int secret = 0;
    cin >> secret;
    int lo = 1, hi = 500;
    int page = 0;
    while (page != secret) {
        page = (lo + hi) / 2;
        cout << "Page " << page << "? ";
        if (page < secret) {
            cout << "Later!" << endl;
            lo = page + 1;
        } else if (page > secret) {
            cout << "Earlier!" << endl;
            hi = page - 1;
        } else {
            cout << "Found it!" << endl;
        }
    }
    return 0;
}
