#include <bits/stdc++.h>
using namespace std;

int findMissing(int arr[], int n){
    int hash[n + 1] = {0};

    for(int i = 0; i < n - 1; i++){
        hash[arr[i]] = 1;
    }

    for(int i = 1; i <= n; i++){
        if(hash[i] == 0){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1, 2, 4, 5};
    int n = 5;
    cout << findMissing(arr, n);
}