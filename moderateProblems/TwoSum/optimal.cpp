#include <bits/stdc++.h>
using namespace std;
 
//slightly better than nlogn 2 pointer approach sort the array

vector<int> getIndexes(vector<int> vec, int k){
    int start = 0, end  = vec.size() - 1, sum = 0;
    vector<int> copy = vec;
    sort(copy.begin(), copy.end());

    while(start <= end){
        sum = copy[start] + copy[end];
        if(sum < k){
            start++;
        }
        else if(sum > k){
            end--;
        }
        else{
            break;
        }
    }

    int i = find(vec.begin(), vec.end(), copy[start]) - vec.begin();
    int j = find(vec.begin(), vec.end(), copy[end]) - vec.begin();

    return {i, j};


    
}

int main(){
    vector<int> vec = {2, 6, 5, 8, 11};
    int k = 14;
    for(auto it: getIndexes(vec, k)){
        cout << it << " ";
    }
}