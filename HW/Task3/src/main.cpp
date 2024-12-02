#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> smallestNumbers;
    int input;

    while (true) {
        cin >> input;

        if (input == -2) {
            break;
        } else if (input == -1) {
            if (smallestNumbers.size() < 5) {
                cout << "Недостаточно чисел для вывода пятого по возрастанию." << endl;
            } else {
                cout << smallestNumbers[4] << endl;
            }
        } else {
            if (smallestNumbers.size() < 5) {
                smallestNumbers.push_back(input);
                sort(smallestNumbers.begin(), smallestNumbers.end());
            } else if (input < smallestNumbers[4]) {
                smallestNumbers[4] = input;
                sort(smallestNumbers.begin(), smallestNumbers.end());
            }
        }
    }
    return 0;
}