#include <iostream>
#include <string>
#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    std::string userInput;
    int charCount[256] = {0};  // Array to count all ASCII characters
    
    std::cout << "Enter string: ";
    std::getline(std::cin, userInput);
    
    // Count each character in the input string
    for(char character : userInput) {
        charCount[character]++;
    }
    
    // Display count for each character that appears in the string
    for(int index = 0; index < 256; index++) {
        if(charCount[index] > 0) {
            std::cout << "'" << char(index) << "' : " << charCount[index] << std::endl;
        }
    }
    
    return 0;
}