#include <iostream>

using namespace std;

int main() {
    int salary;
    cout << "vvedit vashu zarplatu: ";
    cin >> salary;

    cout << ((salary - 1000 < 0) ? "nada rabotat bilshe" :
                 ((salary - 1000000 < 0) ? "Ti molodec" : "Ti milioner:3")) << endl;
    return 0;
}
