#include <iostream>
#include <vector>
using namespace std;

int maxSubarrayIndexes(vector<int> arr) {
    int j = 0, iMax = 0, jMax = 0, sumMax = 0, sumTemp = 0;
    for (int i = 0; i < arr.size(); i++) {
        sumTemp = arr[i];
        for (int j = i + 1; j < arr.size(); ++j) {
            sumTemp += arr[j];
            if (sumTemp > sumMax) {
                iMax = i;
                jMax = j;
                sumMax = sumTemp;
            }
        }
    }
    cout << "Indexes: " << iMax << ", " << jMax << "\nSum:\t" << sumMax;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    maxSubarrayIndexes(arr);
    return 0;
}