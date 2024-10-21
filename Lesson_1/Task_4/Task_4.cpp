#include <iostream>

using namespace std;

int main() {
    int zarplata;
    cout << "vvedit vashu zarplatu: ";
    cin >> zarplata;

    cout << ((zarplata - 1000 < 0) ? "nada rabotat bilshe" :
                 ((zarplata - 1000000 < 0) ? "Ti molodec" : "Ti milioner:3")) << endl;
    return 0;
}
