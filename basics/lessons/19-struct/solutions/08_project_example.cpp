#include <iostream>
#include <string>
using namespace std;

struct Pet {
    string name;
    int age;
    int happy;
};

int main() {
    Pet p;
    cin >> p.name >> p.age >> p.happy;
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    if (p.happy >= 50) {
        cout << p.name << " is happy!" << endl;
    } else {
        cout << p.name << " wants to play." << endl;
    }
    return 0;
}
