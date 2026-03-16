#include <bits/stdc++.h>
using namespace std;

void Mov(int arr[]){
    int n = 10;
    for(int i = 0; i < n; i++){
        int j = i;
        while(arr[j] == 0){
            if(j == n - 1){
                return;
            }
            j++;
        }
        swap(arr[j], arr[i]);
    }
}

int main(){
    int arr[] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 2};
    for(int i : arr){
        cout << i << " ";
    }

    cout << endl;
    Mov(arr);
    for(int i : arr){
        cout << i << " ";
    
    }

}