#include <iostream>
#include <vector>
using namespace std;

void maxSubarrayIndices(vector<int> arr, int start, int end) {
    if (arr.empty()) {
        start = -1;
        end = -1;
        return; //-1, -1 если массив пуст
    }

    int max_sum = arr[0];
    int current_sum = 0;
    start = 0;
    end = 0;
    int temp_start = 0;

    for (int i = 0; i < arr.size(); ++i) {
        current_sum += arr[i];

        if (current_sum > max_sum) {
            max_sum = current_sum;
            start = temp_start;
            end = i;
        }

        if (current_sum < 0) {
            current_sum = 0;
            temp_start = i + 1;
        }
    }
}

int main() {
    vector<int> a = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    
    int start, end;
    maxSubarrayIndices(a, start, end);
    
    cout << start << " " << end << endl;
    return 0;
}