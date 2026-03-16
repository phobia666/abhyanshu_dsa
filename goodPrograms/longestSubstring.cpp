#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    set<char> st;
    int c = 1;
    int length = 0;

    if(s.size() == 1){
        return 1;
    }

    for(int i = 0; i < s.size(); i++){
        st.insert(s[i]);
        if(st.size() == c){
            c++;
            if(st.size() > length){
                length = st.size();
            }
        }
        else{
            i = i - st.size() + 1;
            st.clear();
            st.insert(s[i]);
            c = 2;
        }
    }
    return length;
}

int main(){
    string s = "au";
    cout << lengthOfLongestSubstring(s);
}