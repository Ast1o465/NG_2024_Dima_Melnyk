#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string decryptCaesarCipher(const string& text, int shift) {
    string result = "";
    for (char c : text) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            // Decrypting the character
            c = (c - base - shift + 26) % 26 + base;
        }
        result += c; // Append the decrypted (or unchanged) character
    }
    return result;
}

int main() {
    string text = "Spwwz, declyrpc. Dppxd wtvp jzf yze ufde l dnctae vtootp, dz zfc lrpynj slgp dzxp uzm qzc jzf. Tq jzf hlye ez lnnpae esp \"uzm\" zqqpc - ufde afds ez jzfc cpaz esp nzop, esle sld opncjaepo estd xpddlrp, lyo ylxp te nlccze... Hp lcp hltetyr...";
    int shift = 11;

    string decryptedText = decryptCaesarCipher(text, shift);
    cout << "Decrypted text: \n" << decryptedText << endl;

    return 0;
}
