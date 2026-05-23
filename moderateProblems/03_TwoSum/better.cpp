#include <bits/stdc++.h>
using namespace std;
 
//nlogn time complexity

vector<int> getIndexes(vector<int> vec, int k){
    map<int, int> mp;

    for(int i = 0; i < vec.size(); i++){
        auto it = mp.find(k - vec[i]);
        if(it != mp.end()){
            return {it->second, i};
        }
        mp[vec[i]] = i;
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