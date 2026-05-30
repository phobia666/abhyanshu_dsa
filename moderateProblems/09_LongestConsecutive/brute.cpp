#include <bits/stdc++.h>
using namespace std;


//returning the length of the longest sequence of consecutive numbers in the array
//TC: O(N2) SC: O(1)

int LongConsec(vector<int> vec){
    int left, right, index, length, maxLength = 1;

    for(int i = 0; i < vec.size(); i++){
        left = vec[i] - 1;
        right = vec[i] + 1;
        index = 0;
        length = 1;

        //left
        while(true){
            if(index == vec.size()){
                break;
            }
            if(left == vec[index]){
                length++;
                index = 0;
                left = left - 1;
            }
            index++;
        }

        index = 0;
        //right
        while(true){
            if(index == vec.size()){
                break;
            }
            if(right == vec[index]){
                length++;
                index = 0;
                right = right + 1;
            }
            index++;
        }
        maxLength = max(maxLength, length);
    }
    return maxLength;
}

int main(){
    vector<int> vec = {102, 100, 1, 101, 99, 2, 1, 1};
    cout << LongConsec(vec);
}