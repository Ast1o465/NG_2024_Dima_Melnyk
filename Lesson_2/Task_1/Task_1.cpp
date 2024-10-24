#include <iostream>

using namespace std;

int main() {
    int numbers[5];

    cout << "vvedit 5 cusel: ";

    // vvod cusel v masiv
    for (int cusla = 0; cusla < 5; ++cusla) {
        cin >> numbers[cusla];
    }
    // vuvod cusel
    cout << "Vuvedeni cusla: ";
    for (int cusla = 0; cusla < 5; ++cusla) {
        cout << numbers[cusla];
        if (cusla < 4) {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}
