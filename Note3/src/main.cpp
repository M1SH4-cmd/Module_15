#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector<int> vec = {1, 235, 234, 867, 132, 978, 23, -246, -236, -450, 233};

    for(int i = 0; i < vec.size(); i++){
        for(int j = 0; j < vec.size() - 1; j++){
            if(vec[j] < vec[j + 1]){
                int temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < vec.size(); i++) cout << vec[i] << " ";

    return 0;
}