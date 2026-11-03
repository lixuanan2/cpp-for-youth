#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> odd;
    vector<int> even;
    int x = 0;
    cin >> x;
    while (x != 0) {
        if (x % 2 != 0) {
            odd.push_back(x);
        } else {
            even.push_back(x);
        }
        cin >> x;
    }
    int a = odd.size();
    for (int i = 0; i < a; i++) {
        cout << odd[i] << " ";
    }
    int b = even.size();
    for (int i = 0; i < b; i++) {
        cout << even[i] << " ";
    }
    cout << endl;
    return 0;
}
