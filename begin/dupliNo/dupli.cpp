#include <bits/stdc++.h>
using namespace std;

int singleOne(vector<int> vec, int n){
    // hashing
    vector<int> temp(n + 1, 0);
    for(int i = 0; i < n; i++){
        temp[vec[i]]++;
    }
    for(int i = 0; i < n; i++){
        if(temp[i] == 1){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> vec = {1, 1, 3, 3, 2, 4, 4, 5, 5}; // array from 1 to 5
    int n = vec.size();
    cout << singleOne(vec, n);
}