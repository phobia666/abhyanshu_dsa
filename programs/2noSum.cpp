#include <bits/stdc++.h>
using namespace std;

bool SecondRec(int arr[], int pointer1, int value, int pointer2){
    if(pointer2 >= 9){
        return false;
    }

    if(pointer1 != pointer2){
        if(arr[pointer1] + arr[pointer2] == value){
            return true;
        }
    }
    return SecondRec(arr, pointer1, value, pointer2 + 1);
    
}

bool FirstRec(int arr[], int start, int value){
    if(start >= 9){
        return false;
    }
    bool cond = SecondRec(arr, start, value, 0);
    if (cond){
        return true;
    }

    return FirstRec(arr, start + 1, value);
    
}

int main(){
    int arr[] = {4, 2, 6, 7, 9, 1, 5, 5, 2};
    int value;
    cout << "Enter the value: \n";

    cin >> value;
    cout << FirstRec(arr, 0, value);

}