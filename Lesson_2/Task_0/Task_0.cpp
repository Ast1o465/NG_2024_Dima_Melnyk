#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string decryptCaesarCipher(const string& encryptedText, int shiftKey) {
    string decryptedResult = "";
    for (char currentChar : encryptedText) {
        if (isalpha(currentChar)) {
            char alphabetStart = islower(currentChar) ? 'a' : 'A';
            // Decrypting the character
            currentChar = (currentChar - alphabetStart - shiftKey + 26) % 26 + alphabetStart;
        }
        decryptedResult += currentChar; // Append the decrypted (or unchanged) character
    }
    return decryptedResult;
}

int main() {
    string encryptedMessage = "Spwwz, declyrpc. Dppxd wtvp jzf yze ufde l dnctae vtootp, dz zfc lrpynj slgp dzxp uzm qzc jzf. Tq jzf hlye ez lnnpae esp \"uzm\" zqqpc - ufde afds ez jzfc cpaz esp nzop, esle sld opncjaepo estd xpddlrp, lyo ylxp te nlccze... Hp lcp hltetyr...";
    int shiftValue = 11;

    string decryptedMessage = decryptCaesarCipher(encryptedMessage, shiftValue);
    cout << "Decrypted text: \n" << decryptedMessage << endl;

    return 0;
}
