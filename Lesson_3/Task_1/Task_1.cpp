#include <iostream>
using namespace std;

// Function to print spaces
void printSpaces(int count) {
    if (count <= 0) return;
    cout << " ";
    printSpaces(count - 1);
}

// Function to print stars
void printStars(int count) {
    if (count <= 0) return;
    cout << "*";
    printStars(count - 1);
}

// Function to print one line of the tree
void printTreeLine(int spaces, int stars) {
    printSpaces(spaces);
    printStars(stars);
    cout << endl;
}

// Recursive function to build the tree
void buildTree(int height, int currentLevel = 0) {
    if (currentLevel >= height) return;
    
    printTreeLine(height - currentLevel - 1, 2 * currentLevel + 1);
    buildTree(height, currentLevel + 1);
}

int main() {
    int treeHeight;
    cout << "Enter tree height: ";
    cin >> treeHeight;
    
    buildTree(treeHeight);
    
    return 0;
}