#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec = {1, 6, 3, 6, -12, 634, 200, 12, 5, 3};
    vector<int> res(vec.size(), 0);

    int min = vec[0];
    for(int i = 0; i < vec.size(); i++){
        if(vec[i] < min) min = vec[i];
    }

    for(int i = 0; i < vec.size() - 1; i++){
        int maxfind = 0;

        for(int j = 0; j < vec.size(); j++){
            if(vec[j] > vec[maxfind]) maxfind = j;
        }
        res[i] = vec[maxfind];
        vec[maxfind] = min;
    }

    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
}