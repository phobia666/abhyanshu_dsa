#include <bits/stdc++.h>
using namespace std;

int opt(vector<int> nums, int k){
    int j = 0;
    int sum = 0;
    int maxLen = 0;

    for(int i = 0; i < nums.size(); i++){
        
        if(sum > k){
            sum -= nums[j];
            j++;
        }
        if(sum == k){
            maxLen = max(maxLen, i - j);
        }
        sum += nums[i];
    }
}

int main(){
    vector<int> nums = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    int k = 6;
    cout << opt(nums, k);
}