#include <bits/stdc++.h>
using namespace std;

// hashing is the concept here, we are hashing the sum of subarrays in a hashmap and then resusing it to find the sums of middle subarrays and obv. till the end and meanwhile checking the sum if it equals k

int bet(vector<int> nums, int k){
    map<int, int> mp;
    int i = 0, sum = 0, len = 0;
    int n = nums.size();
    while(i < n){
        sum += nums[i];
        mp[sum] = i;

        if(sum == k) len = sum;

        auto it = mp.find(sum - k);
        if(it != mp.end()){
            len = max(len, i - it->second);
        }
        i++;
    }
    return len;

}

int main(){
    vector<int> nums = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    int k = 6;
    cout << bet(nums, k);
}