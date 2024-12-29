#include <iostream>
#include <string>

using namespace std;

bool isLetter(char currentChar) {
    return (currentChar >= 'a' && currentChar <= 'z') || (currentChar >= 'A' && currentChar <= 'Z');
}

int countWords(const string& str) {
    int wordCount = 0;
    bool inWord = false;
    
    for (char currentChar : str) {
        if (isLetter(currentChar)) {
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }
    
    return wordCount;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    
    int words = countWords(input);
    cout << "Number of words: " << words << endl;
    return 0;
}

// "234Hello&*&#world#$%a"
// output: 3 words