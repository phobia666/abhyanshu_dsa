#include <bits/stdc++.h>

using namespace std;

// void Sort(int arr[], int start, int end){
//     int pivot = arr[start - 1];
//     int pre_pivot = start - 1;

//     list<int> ls(1, pivot);

//     for(int i = start; i <= end; i++){
//         if(arr[i] < pivot){
//             ls.push_back(i);
//         }
//         else{
//             ls.push_front(i);
//         }
//     }

//     int count = 0;
//     for(auto it : ls){
//         arr[count] = it;
//     }

//     auto fd = find(ls.begin(), ls.end(), pivot);
//     int post_pivot = distance(ls.begin(), fd);

//     // first half
//     Sort(arr, pre_pivot, post_pivot - 1);

//     // second half
//     Sort(arr, post_pivot + 1, end);
    
// }

int pivIn(int arr[], int low, int high, int pivot){
    int pi = low;
    while(low <= high){
        while((arr[low] <= pivot) && low <= high){
            low++;
        }
        while((arr[high] > pivot && high >= low)){
            high--;
        }
        if(low < high)swap(arr[low], arr[high]);

    }
    swap(arr[pi], arr[high]);
    return high;
}


void Qsort(int arr[], int low, int high){
    int pivot  = arr[low];
    int piv_index = low;
    

    if(low < high){
        piv_index = pivIn(arr, low, high, pivot);

        Qsort(arr, low, piv_index - 1);
        Qsort(arr, piv_index + 1, high);
    }
}
int main(){
    
    int arr[] = {4, 6, 2, 5, 7, 9, 1, 3};
    Qsort(arr, 0, 7);

    for(int i : arr) cout << i << " ";
    
}