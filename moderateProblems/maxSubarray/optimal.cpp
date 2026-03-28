#include <bits/stdc++.h>
using namespace std;

// KADANE'S ALGORITHM

int maxSub(vector<int> vec){
    int sum = 0, maxSum = INT_MIN;
    int startSub, endSub;
    int start;


    for(int i = 0; i < vec.size(); i++){
        if(sum == 0){
            start = i;
        }
        sum += vec[i];

        if(sum > maxSum){
            maxSum = sum;
            startSub = start;
            endSub = i;
        }

        if(sum < 0){
            sum = 0;
        }
    }

    for(int i = startSub; i <= endSub; i++){
        cout << vec[i] << " ";
    }
    cout << endl;

    return maxSum;
}

int main(){
    vector<int> vec = {
        -1, -3, 4, -1, -2, 1, 5, -3
    };
    cout << maxSub(vec);
}