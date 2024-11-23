#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec = {1, 6, 3, 6, -12, 634, 200, 12, 5, 3};

    for(int i = vec.size() - 1; i >= 0; i--){
        int maxfind = vec[0];
        for(int j = 0; j <= i; j++){
            if(vec[j] > vec[maxfind]) maxfind = j;
        }

        int temp = vec[i];
        vec[i] = vec[maxfind];
        vec[maxfind] = temp;

    }

    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }

    return 0;
}