#include <iostream>

using namespace std;

int main() {
    int salary;
    cout << "vvedit vashu zarplatu: ";
    cin >> salary;

    if (salary < 1000) {
        cout << "nada rabotat bilshe" << endl;
    }
    if (salary > 999 && salary < 1000000) {
        cout << "Ti molodec" << endl;
    }
    if (salary > 999999) {
        cout << "Ti milioner:3" << endl;
    }
}
