#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool compare(int a, int b){
    return abs(a) < abs(b);
}

int main(){



    vector<int> vec = {-100, -50, -5, 1, 10, 15};
    
    sort(vec.begin(), vec.end(), compare);

    for(int num : vec) cout << num << "\t";

}
