#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec = {10, 22, 12, 3, 0, 6};

    set<int> st;
    st.insert(5);
    st.insert(4);
    st.insert(1);
    st.insert(8);

    auto it = st.find(7);
    int idx = distance(st.begin(), it);
    cout << idx << endl;
    
    for(auto it: st){
        cout << it << " ";
    }
}