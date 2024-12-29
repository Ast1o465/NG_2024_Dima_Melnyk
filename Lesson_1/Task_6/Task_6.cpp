#include <iostream>
#include <windows.h>

using namespace std;

void clearScreen() {
    system("cls");
}

void drawTriangle(int size) {
    for (int row = 1; row <= size; row++) {
        for (int column = 1; column <= row; column++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    const int MAX_SIZE = 5;
    
    while (true) {
        for (int size = 1; size <= MAX_SIZE; size++) {
            clearScreen();
            drawTriangle(size);
            Sleep(500);
        }

        for (int size = MAX_SIZE - 1; size >= 1; size--) {
            clearScreen();
            drawTriangle(size);
            Sleep(500);
        }
    }
    
    return 0;
}