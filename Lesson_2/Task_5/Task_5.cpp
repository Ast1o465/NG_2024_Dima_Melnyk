#include <iostream>
#include <string>
using namespace std;


bool isLetter(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int countWords(const string& str) {
    int wordCount = 0;
    bool inWord = false;
    
    for (char c : str) {
        if (isLetter(c)) {
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
    string input = "234Hello&*&#world#$%a";  
    
    int words = countWords(input);
    cout << "Test string: " << input << endl;
    cout << "Number of words: " << words << endl; 
    return 0;
}