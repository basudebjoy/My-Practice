#include <iostream>
using namespace std;

int main() {
    int number, maxValue = 0, position = 0;

    for (int i = 1; i <= 100; i++) {
        cin >> number;
        if (number > maxValue) {
            maxValue = number;
            position = i;
        }
    }

    cout << maxValue << endl;
    cout << position << endl;

    return 0;
}

