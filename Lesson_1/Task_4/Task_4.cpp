#include <iostream>

using namespace std;

int main() {
    int salary;
    cout << "vvedit vashu zarplatu: ";
    cin >> salary;

    // Перевірка для зарплати менше тисячі
    if (salary - 1000 < 0) {
        cout << "nada rabotat bilshe" << endl;
        return 0;
    }

    // Перевірка для зарплати між тисячею і мільйоном
    if (salary - 1000000 < 0) {
        cout << "Ti molodec" << endl;
        return 0;
    }

    // Якщо зарплата більше мільйона
    cout << "Ti milioner:3" << endl;

    return 0;
}
