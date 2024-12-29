#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int values[5];
    int sortedValues[5];

    for (int index = 0; index < 5; index++) {
        cout << "Enter " << (index + 1) << " value: ";
        cin >> values[index];
        sortedValues[index] = values[index];
    }

    sort(sortedValues, sortedValues + 5, greater<int>());

    for (int row = 0; row < sortedValues[0]; row++) {
        for (int column = 0; column < 5; column++) {
            if (row < values[column]) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
