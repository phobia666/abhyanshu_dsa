#include <bits/stdc++.h>
using namespace std;

int number(vector<int> arr, int k){
    map<int, int> mp;
    int sum = 0;
    int i = 0;
    int n = arr.size();
    int ans = 0;

    while(i < n){
        sum += arr[i];
        mp[sum] = i;

        if(sum == k) ans++;

        auto it = mp.find(sum - k);
        if(it != mp.end()){
            ans++;
        }
        i++;
    }
    return ans;
}


int main(){
    vector<int> arr = {1, 2, 3};
    int k = 3;
    cout << number(arr, k);
}