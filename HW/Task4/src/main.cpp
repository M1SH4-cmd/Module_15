#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector <int> vec = {-100,-50, -5, 1, 10, 15};
    int right = 0;
    while (right < vec.size() && vec[right] < 0) ++right;
    int left = right - 1;
    while (left >= 0 && right < vec.size()){
        if (vec[right] > -vec[left]) cout << vec[left--] << " ";
        else cout << vec[right++] << " ";
    }
    while (left >= 0) cout << vec[left--] << " "; // выводим левый хвост
    while (right < vec.size()) cout << vec[right++] << " "; // выводим правый хвост
    cout << endl;
}