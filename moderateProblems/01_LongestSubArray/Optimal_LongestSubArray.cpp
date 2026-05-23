#include <bits/stdc++.h>
using namespace std;

int opt(vector<int> nums, int k){
    int left = 0, right = 0;
    int sum = 0;
    int maxLen = 0;
    int n = nums.size();

    while(right < n){
        if(right < n) sum += nums[right];
        while(left <= right && sum > k){
            sum -= nums[left];
            left++;
        }
        if(sum == k){
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
    }
    return maxLen;
}

int main(){
    vector<int> nums = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    int k = 6;
    cout << opt(nums, k);
}