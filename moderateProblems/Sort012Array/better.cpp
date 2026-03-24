#include <bits/stdc++.h>
using namespace std;

void sort(int arr[]){
    int n = 11;
    int zeros = 0, ones = 0, twos = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0) zeros++;
        if(arr[i] == 1) ones++;
        if(arr[i] == 2) twos++;
    }
    int counter = 0;
    for(int i = 0; i < zeros; i++, counter++) arr[counter] = 0;
    for(int i = 0; i < ones; i++, counter++) arr[counter] = 1;
    for(int i = 0; i < twos; i++, counter++) arr[counter] = 2;
}

int main(){
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0};
    sort(arr);
    for(int i : arr){
        cout << i << " ";
    }
}