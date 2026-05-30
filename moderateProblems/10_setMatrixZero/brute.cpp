#include <bits/stdc++.h>
using namespace std;

void setZero(int arr[4][4]){
    int newArr[4][4] = {
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {1, 1, 1, 1}
    };

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(arr[i][j] == 0){
                int row = 0, col = 0;
                bool condi = true, condj = true;

                while(condi || condj){
                    if(row == 4){
                        condi = false;
                    }
                    else{
                        newArr[row][j] = 0;
                        row++;
                    }
                    if(col == 4){
                        condj = false;
                    }
                    else{
                        newArr[i][col] = 0;
                        col++;
                    }
                }
            }
        }
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << newArr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int n = 4;
    int m = 4;
    int arr[4][4] = {
        {1, 1, 1 ,1},
        {1, 0, 0, 1},
        {1, 1, 0, 1},
        {1, 1, 1, 1}
    };
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    setZero(arr);

    

}