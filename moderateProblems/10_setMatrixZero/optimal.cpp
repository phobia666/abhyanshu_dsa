#include <bits/stdc++.h>
using namespace std;

void setZero(vector<vector<int>>& arr){

    


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