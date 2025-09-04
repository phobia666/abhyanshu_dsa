#include<bits/stdc++.h>
using namespace std;

void selectn(int arr[], int n){
    int min;
    int c;

    for(int i = 0; i < n; i++){
        min = arr[i];
        for(int j = i; j < n; j++){
            if(arr[j] <= min){
                min = arr[j];
                c = j;
            }
        }
        swap(arr[i], arr[c]);
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    selectn(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}