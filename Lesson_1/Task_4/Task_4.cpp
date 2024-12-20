#include <iostream>
using namespace std;

int main() {
    int salary;
    cout << "vvedit vashu zarplatu: ";
    cin >> salary;

    if (salary < 1000) {
        cout << "nada rabotat bilshe" << endl;
    }
    else if (salary < 1000000) {
        cout << "Ti molodec" << endl;
    }
    else {
        cout << "Ti milioner:3" << endl;
    }
}
