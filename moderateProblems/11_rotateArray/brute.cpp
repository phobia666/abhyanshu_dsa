#include <bits/stdc++.h>
using namespace std;

void rotateArr(vector<vector<int>>& arr, int len){
    vector<vector<int>> ans(len, vector<int>(len, 0));

    for(int i = 0; i < len; i++){
        for(int j = 0; j < len; j++){
            ans[j][len - i - 1] = arr[i][j];
        }
    }
    arr = ans;
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
