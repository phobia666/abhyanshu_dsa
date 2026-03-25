//DUTCH NATIONAL FLAG ALGORITHM
#include <bits/stdc++.h>
using namespace std;

// TC --> O(N)
// SC --> O(1)

void sort(int arr[]){
    int n = 11;
    int low = 0, mid = 0, high = n - 1;

    while(mid <= high){
        switch(arr[mid]){
            case 0 : {
                swap(arr[low], arr[mid]);
                low++;
                mid++;
            }
            break;
            case 1 : {
                mid++;
            }
            break;
            case 2 : {
                swap(arr[high], arr[mid]);
                high--;
            }
            break;
            default : {
                cout << "Invalid array element" << endl;
                exit(0);
            }
        }
    }
}

int main(){
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0};
    sort(arr);
    for(int i : arr){
        cout << i << " ";
    }
}