#include <bits/stdc++.h>
using namespace std;

//optimal approach for
//returning the alternative merge of positives and negatives of a a single array 
//when the number of positives and negatives are equal
//timeC vigo(N)
//spaceC vigo(N)

vector<int> signs(vector<int> vec){
    int n = vec.size();
    vector<int> ans(n, 0);
    int pos = 0, neg = 1;

    for(int i = 0; i < n; i++){
        if(vec[i] < 0){
            ans[neg] = vec[i];
            neg += 2;
        }
        else{
            ans[pos] = vec[i];
            pos += 2;
        }
    }
    return ans;

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