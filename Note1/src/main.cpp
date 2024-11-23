#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5};
    vector<int> temp(vec.size(), 0);

    for(int i = 0; i < vec.size(); i++){
        if(vec[i] != -1){
            for(int j = i + 1; j < vec.size(); j++){
                if(vec[j] == vec[i]){
                    vec[j] = -1;
                    temp[i] += 1;
                }
            }
        }
    }

    int max_ind = 0;
    for(int i = 0; i < temp.size(); i++){
        if(temp[i] > temp[max_ind]) max_ind = i;
    }

    cout << vec[max_ind];
    return 0;
}