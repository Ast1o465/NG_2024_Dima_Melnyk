#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> values(5);

    //zaput cusel v korustuvaca
    for (int i = 0; i < 5; ++i) {
        cout << "Enter " << (i + 1) << " value: ";
        cin >> values[i];
    }
    for (int i = 0; i < 5; ++i) {
        int stars = values[i];
        for (int j = 0; j < stars; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
