#include <bits/stdc++.h>
using namespace std;


int sLarge(int arr[], int lar){
    int secLar = -1;
    for(int i = 12; i >= 0; i--){
        if((arr[i] > secLar) && (arr[i] < lar)){
            secLar = arr[i];
        }
    }
    return secLar;
}

int Large(int arr[]){
    int lar = arr[0];

    for(int i = 0; i < 13; i++){
        if(arr[i] > lar){
            lar = arr[i];
        }
    }
    return lar;
}

int main(){
    int arr[] = {4, 8, 9, 5, 4 ,3, 6, 8, 2, 5, 4, 0, 9};
    int lar = Large(arr);
    int secLar = sLarge(arr, lar);
    cout << "LargestElement: " << lar << endl;
    cout << "SecondLargestElement: " << secLar << endl;

}