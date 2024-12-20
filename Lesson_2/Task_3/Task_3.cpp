#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> values;

    // Input values until the user enters 0 or reaches 20 values
    int value;
    for (int i = 0; i < 20; ++i) {
        cout << "Enter value: ";
        cin >> value;

        if (value == 0) {
            break;
        }

        values.push_back(value);
    }

    // Draw the figure
    for (int value : values) {
        for (int i = 0; i < value; ++i) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}