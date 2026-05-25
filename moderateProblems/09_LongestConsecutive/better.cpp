#include <bits/stdc++.h>
using namespace std;

int LongConsec(vector<int>& vec){
    sort(vec.begin(), vec.end());
    int length = 1;
    int maxlength = 1;

    if(vec.size() == 0){
        return 0;
    }
    if(vec.size() == 1){
        return 1;
    }

    for(int i = 0; i < vec.size() - 1; i++){
        if(vec[i + 1] - vec[i] == 1){
            length++;
            
            if(i == vec.size() - 2){
                maxlength = max(maxlength, length);
            }
        }
        else if(vec[i + 1] - vec[i] > 1){
            maxlength = max(maxlength, length);
            length = 1;
        }
        if(i == vec.size() - 2){
                maxlength = max(maxlength, length);
        }
    }
    return maxlength;
}

int main(){
    vector<int> vec = {102, 100, 1, 101, 99, 2, 1, 1};
    cout << LongConsec(vec);
}