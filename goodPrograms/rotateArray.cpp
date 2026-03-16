#include <bits/stdc++.h>
using namespace std;

void Rotate(int arr[], int d){

    int n = 7;
    d = d % n;

    int temp[d];
    for(int i = 0; i < d; i++){
        temp[i] = arr[i];
    }

    for(int i = d; i < n; i++){
        arr[i - d] = arr[i];
    }

    for(int i = n - d; i < n; i++){
        arr[i] = temp[i - (n - d)];
    }

}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    cout << "Enter d: " << endl;
    int d;
    cin >> d;
    Rotate(arr, d);

    for(int i : arr){
        cout << i << " ";
    }

}