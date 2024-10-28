#include <iostream>

using namespace std;

int main() {
    int height;

    cout << "Vvedit kilkist radkiv: ";
    cin >> height;

    // Calculate maximum width of the tree based on the height
    int maxWidth = 2 * height - 1;

    // telo elki
    for (int row = 1; row <= height; row++) {
        int stars = 2 * row - 1; // kilkist stars v radke
        int spaces = (maxWidth - stars) / 2; // Calculate spaces based on maxWidth

        // Print leading spaces
        for (int spaceIndex = 0; spaceIndex < spaces; spaceIndex++) {
            cout << " ";
        }

        // Print stars
        for (int starIndex = 1; starIndex <= stars; starIndex++) {
            cout << "*";
        }

        cout << endl;
    }

    // stvol elki
    int trunkSpaces = (maxWidth - 1) / 2; // Calculate spaces for the trunk
    for (int spaceIndex = 0; spaceIndex < trunkSpaces; spaceIndex++) {
        cout << " ";
    }
    cout << "*" << endl;

    return 0;
}
