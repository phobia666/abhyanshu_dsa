#include <bits/stdc++.h>
using namespace std;
// array made from adding the adjacent elements is a subarray

int maxLength(int arr[], int n){
    //generate all the subarrays
    int sum, j, counter;
    vector<int> subArrayLengths;
    for(int i = 0; i < 10; i++){
        counter = 0;
        sum = 0;
        j = i;
        while(sum < n){
            sum += arr[j]; 
            j++;
            counter++;
        }
        if(sum == n){
            subArrayLengths.push_back(counter);
        }
    }
    int maxL = 0;
    for(auto it: subArrayLengths){
        if(it > maxL){
            maxL = it;
        }
    }
    return maxL;
}

int main(){
    int arr[] = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    int n = 4;
    cout << maxLength(arr, n);
}