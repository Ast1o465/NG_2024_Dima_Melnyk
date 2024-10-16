#include <iostream>

using namespace std;

int main()
{
    double num1,num2;
    char dia ;
    cout << "vvdedit cuslo1" << endl;
    cin >> num1;
    cout << "vvdedit cuslo2" << endl;
    cin >> num2;

    cout << "vuberit diu (+,-,*,/)";
    cin >> dia;
    switch (dia)
    {
    case '+':
        cout << "result "<< num1 + num2 << endl;
        break;
    case '-':
        cout << "result "<< num1 - num2 << endl;
        break;
    case '*':
        cout << "result "<< num1 * num2 << endl;
        break;
    case '/':
        cout << "result "<< num1 / num2 << endl;
        break;
    default:
        break;
    }

    return 0;
}
