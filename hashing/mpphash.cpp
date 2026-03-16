#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    map<int, int> mpp;
    for(int i = 0; i < n; i++){
        mpp[arr[i]] += 1;
    }

    cout << "Number of queries?: ";
    int query;
    cin >> query;
    while(query--){
        cout << "Enter the number: ";
        int number;
        cin >> number;
        cout << mpp[number] << endl;
    }
}