#include <bits/stdc++.h>
using namespace std;

//brute
//returning the leaders in the array
//leader is that element after which every other element is smaller
//TC: O(N2) SC: O(N) for storing the ans

vector<int> lead(vector<int> vec){
    set<int> st;
    vector<int> ans;
    for(int i = vec.size() - 1; i >= 0; i--){
        st.insert(vec[i]);
        auto it = st.begin();
        advance(it, st.size() - 1);
        if(*it == vec[i]){
            ans.push_back(vec[i]);
        }
    }
    return ans;

}

int main(){
    vector<int> vec = {10, 22, 12, 3, 0, 6};
    
    for(auto it : lead(vec)){
        cout << it << " ";
    }
}