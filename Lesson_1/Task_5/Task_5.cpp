#include <iostream>

using namespace std;

int main() {
    int height;

    cout << "Vvedit kilkist radkiv: ";
    cin >> height;

    // telo elki
    for (int row = 1; row <= height; row++) {
        int stars = 2 * row - 1; // kilkist stars v radke
        int spaces = (80 - stars) / 2;

        for (int spaceIndex = 0; spaceIndex < spaces; spaceIndex++) {
            cout << " ";
        }

        for (int starIndex = 1; starIndex <= stars; starIndex++) {
            cout << "*";
        }

        cout << endl;
    }

    // stvol elki
    int trunkSpaces = (80 - 1) / 2; // vidstup dla stvola
    for (int spaceIndex = 0; spaceIndex < trunkSpaces; spaceIndex++) {
        cout << " ";
    }
    cout << "*" << endl;

    return 0;
}
