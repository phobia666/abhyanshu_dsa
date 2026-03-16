#include<bits/stdc++.h>
using namespace std;

void insertn(int arr[], int n){

    for(int i = 1; i < n; i++){
        for(int j = i; j > 0; j--){
            if(arr[j - 1] > arr[j]){
                swap(arr[j - 1], arr[j]);
            }
            else break;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    insertn(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}