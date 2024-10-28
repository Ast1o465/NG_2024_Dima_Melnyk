#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> values(5);

    //zaput cusel v korustuvaca
    for (int index  = 0; index  < 5; ++index ) {
        cout << "Enter " << (index  + 1) << " value: ";
        cin >> values[index ];
    }
    for (int valueIndex = 0; valueIndex < 5; ++valueIndex) {
        int stars = values[valueIndex];
        for (int starIndex = 0; starIndex < stars; ++starIndex) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
