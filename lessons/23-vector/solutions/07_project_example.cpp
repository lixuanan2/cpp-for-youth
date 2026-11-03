#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> steps;
    int x = 0;
    cin >> x;
    while (x != 0) {
        steps.push_back(x);
        cin >> x;
    }
    int n = steps.size();
    int best = steps[0];
    for (int i = 1; i < n; i++) {
        if (steps[i] > best) {
            best = steps[i];
        }
    }
    cout << n << " days" << endl;
    cout << "Best: " << best << endl;
    return 0;
}
