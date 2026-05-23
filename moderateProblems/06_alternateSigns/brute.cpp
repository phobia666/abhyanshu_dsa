#include <bits/stdc++.h>
using namespace std;

//brute approach for
//returning the alternative merge of positives and negatives of a a single array 
//when the number of positives and negatives are equal
//timeC vigo(N + N/2)
//spaceC vigo(N)

vector<int> signs(vector<int> vec){
    vector<int> pos;
    vector<int> neg;

    int n = vec.size();


    for(auto it : vec){
        if(it < 0){
            neg.push_back(it);
        }
        else{
            pos.push_back(it);
        }
    }


    for(int i = 0; i < n / 2; i++){
        vec[2 * i] = pos[i];
        vec[2 * i + 1] = neg[i];
    }
    return vec;

}


int main(){
    
    vector<int> vec = {3, 1, -2, -5, 2, -4};
    for(auto it : vec){
        cout << it <<  " ";
    }
    cout << endl;

    for(auto it : signs(vec)){
        cout << it << " ";
    }

}