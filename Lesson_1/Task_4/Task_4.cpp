#include <iostream>
using namespace std;

int main() {
    int salary;
    cout << "vvedit vashu zarplatu: ";
    cin >> salary;

    if (salary - 1000 < 0) {
        cout << "nada rabotat bilshe" << endl;
        return 0;
    }

    if (salary - 1000000 < 0) {
        cout << "Ti molodec" << endl;
        return 0;
    }

    cout << "Ti milioner:3" << endl;

    return 0;
}
