#include <bits/stdc++.h>
using namespace std;

int maxSub(vector<int> vec){
    int sum = 0, maxSum = INT_MIN;

    int i = 0;
    while(i < vec.size()){
        maxSum = max(maxSum, sum);
        if(sum + vec[i] < 0){
            i++;
            sum = 0;
        }
        else{
            sum += vec[i];
            i++;
        }
    }
    return maxSum;
}
int main(){
    vector<int> vec = {
        -1, -3, 4, -1, -2, 1, 5, -3
    };
    cout << maxSub(vec);
}