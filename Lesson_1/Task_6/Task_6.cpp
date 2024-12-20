#include <iostream>
#include <windows.h>
using namespace std;

void clearScreen() {
    system("cls");
}

void drawTriangle(int size) {
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    const int MAX_SIZE = 5;
    
    while (true) {
        // Анимация роста
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