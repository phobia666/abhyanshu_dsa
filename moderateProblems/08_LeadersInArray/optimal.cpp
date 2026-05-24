#include <bits/stdc++.h>
using namespace std;

//optimal
//returning the leaders in the array 
//TC: O(N) SC: O(N) for storing the ans

vector<int> lead(vector<int> vec){
    vector<int> ans;
    int max = INT_MIN;

    for(int i = vec.size() - 1; i >= 0; i--){
        if(vec[i] > max){
            max = vec[i];
            ans.push_back(vec[i]);
        }
    }
    return ans;
}

int main(){
    vector<int> vec = {10, 22, 12, 3, 0, 6};
    
    for(auto it : lead(vec)){
        cout << it << " ";
    }
}