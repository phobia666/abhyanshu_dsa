#include <bits/stdc++.h>
using namespace std;

// TC -> O(NlogN) + O(N)
// SC -> O(N)

int major(int arr[]){
    int n = 7;
    map<int, int> mp;

    for(int i = 0; i < n; i++){
        auto it = mp.find(arr[i]);
        if(it != mp.end()){
            it->second++;
        }
        else{
            mp[arr[i]] = 1;
        }
    }
    for(auto it : mp){
        if(it.second > n / 2) return it.first;
    }
}

int main(){
    int arr[] = {
        3, 3, 3, 3, 1, 2, 2
    };
    cout << major(arr);
}