#include <bits/stdc++.h>
using namespace std;

vector<int> spiral(vector<vector<int>>& arr, int len){
    vector<int> ans;
    int top = 0, bottom = len - 1;
    int left = 0, right = len - 1;
    while(top <= bottom || left <= right){
        for(int i = left; i <= right; i++){
            ans.push_back(arr[top][i]);
        }
        if(top == bottom) break;
        top++;
        for(int i = top; i <= bottom; i++){
            ans.push_back(arr[i][right]);
        }
        right--;
        for(int i = right; i >= left; i--){
            ans.push_back(arr[bottom][i]);
        }
        bottom--;
        for(int i = bottom; i >= top; i--){
            ans.push_back(arr[i][left]);
        }
        left++;
    }
    return ans;

}

int main(){
    vector<vector<int>> arr = {
        {1,  2,   3,  4,  5, 6},
        {20, 21, 22, 23, 24, 7},
        {19, 32, 33, 34, 25, 8},
        {18, 31, 36, 35, 26, 9},
        {17, 30, 29, 28, 27, 10},
        {16, 15, 14, 13, 12, 11}
    };
    int len = arr.size();
    vector<int> newArr = spiral(arr, len);

    for(int i = 0; i < len * len; i++){
        cout << newArr[i] << " ";
    }
}