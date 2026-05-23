#include <bits/stdc++.h>
using namespace std;

//optimal approach for
//returning the alternative merge of positives and negatives of a a single array 
//when the number of positives and negatives are unequal
//we fall back to the bruteForce approach

vector<int> signs(vector<int> vec){
    vector<int> pos;
    vector<int> neg;


    for(auto it : vec){
        if(it < 0){
            neg.push_back(it);
        }
        else{
            pos.push_back(it);
        }
    }
    
    if(neg.size() < pos.size()){
        for(int i = 0; i < neg.size(); i++){
            vec[2 * i] = pos[i];
            vec[2 * i + 1] = neg[i];
        }
        int counter = neg.size() * 2;
        for(int i = neg.size(); i < pos.size(); i++){
            vec[counter] = pos[i];
            counter++;
        }
    }
    else{
        for(int i = 0; i < pos.size(); i++){
            vec[2 * i] = pos[i];
            vec[2 * i + 1] = neg[i];
        }
        int counter = pos.size() * 2;
        for(int i = pos.size(); i < neg.size(); i++){
            vec[counter] = neg[i];
            counter++;
        }
    }


    return vec;
}

int main(){
    vector<int> vec = {3, 1, -2, -5, 2, -4, 9, 3};
    for(auto it : vec){
        cout << it <<  " ";
    }
    cout << endl;

    for(auto it : signs(vec)){
        cout << it << " ";
    }
}