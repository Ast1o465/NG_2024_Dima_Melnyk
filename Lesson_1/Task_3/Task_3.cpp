#include <iostream>

using namespace std;

int main()
{
    double num1,num2,result;
    char dia;
    cout << "vvdedit cuslo1" << endl;
    cin >> num1;
    cout << "vvdedit cuslo2" << endl;
    cin >> num2;

    cout << "vuberit diu (+,-,*,/)";
    cin >> dia;
    switch (dia)
    {
    case '+':
         result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if(num2 == 0){
            cout<< "error..." << endl;
            break;
        }
        result = num1 / num2;
        break;
    default:
        cout <<"error.." <<endl;
        break;
    }
    cout << "result: " << result << endl;

    return 0;
}
