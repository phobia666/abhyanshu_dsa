#include <bits/stdc++.h>
using namespace std;

int LongConsec(vector<int> vec){
    int longest = 1;
    if(vec.size() == 0) return 0;
    unordered_set<int> st;
    
    for(int i = 0; i < vec.size(); i++){
        st.insert(vec[i]);
    }

    for(auto it : st){
        if(st.find(it - 1) == st.end()){
            int cnt = 1;
            int x = it;
            while(st.find(x + 1) != st.end()){
                x = x + 1;
                cnt = cnt + 1;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;
}

int main(){
    vector<int> vec = {1, 1, 1, 2};
    cout << LongConsec(vec);
}