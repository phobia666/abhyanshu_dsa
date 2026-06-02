#include <bits/stdc++.h>
using namespace std;

void rotateArr(vector<vector<int>>& arr, int len){
    //transposing matrix
    for(int i = 0; i < len - 1; i++){
        for(int j = i + 1; j < len; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
    for(int i = 0; i < len; i++){
        reverse(arr[i].begin(), arr[i].end());
    }
}

int main(){
    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int len = arr.size();
    rotateArr(arr, len);
    for(int i = 0; i < len; i++){
        for(int j = 0; j < len; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}