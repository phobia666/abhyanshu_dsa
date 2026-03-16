#include <bits/stdc++.h>
using namespace std;

int maxCons(int arr[]){
    int largestC = 0;
    int c = 1;
    int n = (int)sizeof(arr)/ sizeof(arr[0]);
    for(int i = 1; i < 9; i++){
        // int j = i + 1;
        // c = 1;
        // while(arr[j] == arr[i] && j < 9){
        //     c++;
        //     j++;
        // }
        // if(c > largestC){
        //     largestC = c;
        // }
        // i = j - 1;

        if(arr[i] == arr[i - 1]){
            c++;
        }
        else{
            if(c > largestC){
                largestC = c;
            }
            c = 1;
        }

    }
    return largestC;
}

int main(){
    int arr[] = {1, 1, 0, 1, 1, 1, 0, 1, 1};
    // cout << sizeof(arr)/ sizeof(arr[0]);
    cout << maxCons(arr) << endl;
}