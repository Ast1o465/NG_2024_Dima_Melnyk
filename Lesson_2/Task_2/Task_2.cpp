#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int values[5];
    int sortedValues[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter " << (i + 1) << " value: ";
        cin >> values[i];
        sortedValues[i] = values[i];
    }

    sort(sortedValues, sortedValues + 5, greater<int>());

    for (int row = 0; row < sortedValues[0]; row++) {
        for (int col = 0; col < 5; col++) {
            if (row < values[col]) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
