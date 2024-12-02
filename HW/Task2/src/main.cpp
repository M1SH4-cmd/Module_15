#include <iostream>
#include <vector>
using namespace std;

void resultSearcher(vector<int> vec, int res){
    for(int i = 0; i < vec.size(); i++){
        for(int j = 1; j < vec.size(); j++){
            if (vec[i] + vec[j] == res){
                cout << "First pair found:\t" << vec[i] << " " << vec[j] << endl;
                return;
            }
        }
    }

    cout << "Not found pair" << endl;
}

int main(){
    vector<int> vec = {6, 2, 8, 12, 5, 9, 1};
    int res = 17;
    resultSearcher(vec, res);
}