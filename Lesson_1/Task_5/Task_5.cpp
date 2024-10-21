#include <iostream>

using namespace std;

int main() {
    int height;

    cout << "Vvedit kilkist radkiv: ";
    cin >> height;

    // telo elki
    for (int i = 1; i <= height; i++) {
        int stars = 2 * i - 1; // kilkist stars v radke
        int spaces = (80 - stars) / 2;

        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }

        for (int k = 1; k <= stars; k++) {
            cout << "*";
        }

        cout << endl;
    }
    // stvol elki
    int trunkSpaces = (80 - 1) / 2; // vidstup dla stvola
    for (int i = 0; i < trunkSpaces; i++) {
        cout << " ";
    }
    cout << "*" << endl;

    return 0;
}
