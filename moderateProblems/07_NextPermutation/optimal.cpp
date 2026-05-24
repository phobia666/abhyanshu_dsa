#include <bits/stdc++.h>
using namespace std;


void sort(vector<int>& nums, int start){
    for(int i = start; i < nums.size(); i++){
        for(int j = start; j < nums.size() - 1; j++){
            if(nums[j + 1] < nums[j]){
                swap(nums[j + 1], nums[j]);
            }
        }
    }
}

void next(vector<int>& nums){
    int swapIndex;
    int ans;
    bool cond;
    for(int i = nums.size() - 2; i >= 0; i--){
        ans = INT_MAX;
        cond = false;
        for(int j = i + 1; j < nums.size(); j++){
            if(nums[j] > nums[i] && nums[j] < ans){
                ans = nums[j];
                cond = true;
                swapIndex = j;
            }
        }
        if(cond){
            swap(nums[i], nums[swapIndex]);
            sort(nums, i + 1);
            break;
        }
    }
    if(!cond){
        reverse(nums.begin(), nums.end());
    }
    
}


int main(){
    vector<int> nums = {3, 2, 1};
    next(nums);
    for(auto it : nums){
        cout << it << " ";
    }

}