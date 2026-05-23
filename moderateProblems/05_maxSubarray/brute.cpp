#include <bits/stdc++.h>
using namespace std;

int maxSub(vector<int> vec){
    int sum, maxx = INT_MIN;

    for(int i = 0; i < vec.size(); i++){
        sum = 0;
        for(int j = i; j < vec.size(); j++){
            sum += vec[i];
        }
        maxx = max(maxx, sum);
    }
    return maxx;
}
int main(){
    vector<int> vec = {
        -1, -3, 4, -1, -2, 1, 5, -3
    };
    cout << maxSub(vec);
}