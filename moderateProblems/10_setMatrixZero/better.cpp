#include <bits/stdc++.h>
using namespace std;

//converting the matrix 0,1 into matrix in which every zero element's rows and columns turns out to be zero
// TC: O(n*m) SC: O(n*m)

void setZero(vector<vector<int>>& arr){
    int n = arr.size();
    int m = arr[0].size();
    vector<vector<int>> zeroIndexes;


    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == 0){
                zeroIndexes.push_back({i, j});
            }
        }
    }
    // for(int i = 0; i < zeroIndexes.size(); i++){
    //     cout << zeroIndexes[i][0] << endl;
    // }

    for(int i = 0; i < zeroIndexes.size(); i++){
        int row = 0, col = 0;
        bool condi = true, condj = true;

        while(condi || condj){
            if(row == n){
                condi = false;
            }
            else{
                arr[row][zeroIndexes[i][1]] = 0;
                row++;
            }
            if(col == m){
                condj = false;
            }
            else{
                arr[zeroIndexes[i][0]][col] = 0;
                col++;
            }
        }
    }
}

int main(){

    vector<vector<int>> arr = {
        {1, 1, 1 ,1},
        {1, 0, 0, 1},
        {1, 1, 0, 1},
        {1, 1, 1, 1}
    };
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl;
    setZero(arr);

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}