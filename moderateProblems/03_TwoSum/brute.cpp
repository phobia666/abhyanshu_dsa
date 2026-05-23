#include <bits/stdc++.h>
using namespace std;

//nsquare time complexity
vector<int> getIndexes(vector<int> vec, int k){

    for(int i = 0; i < vec.size(); i++){
        for(int j = i; j < vec.size(); j++){
            if(i == j) continue;
            if(vec[i] + vec[j] == k){
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

int main(){
    vector<int> vec = {2, 6, 5, 8, 11};
    int k = 14;
    for(auto it: getIndexes(vec, k)){
        cout << it << " ";
    }
}