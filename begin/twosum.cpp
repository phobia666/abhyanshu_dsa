#include <bits/stdc++.h>
using namespace std;

vector<int> sum(vector<int>& nums, int target){

    for(int i = 0; i < size(nums); i++){
        for(int j = 0; j < size(nums); j++){
            if(i != j){
                if(nums[i] + nums[j] == target){
                    return {i, j};
                }
            }
        }
    }

    return {-1, -1};
}

int main(){
    int n; 
    vector<int> nums(n);

    cout << "Enter the number of elements: " << endl;
    cin >> n;

    cout << "Enter the elements: " << endl;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }


    cout << "target: ";
    int target;
    cin >> target;

    for(auto it : sum(nums, target)){
        cout << it << " ";
    }
}