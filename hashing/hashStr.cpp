#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    int hash[257] = {0}; // 256 total characters in ascii
    for(int i = 0; i < s.length(); i++){
        hash[s[i]] += 1;
    }

    cout << "Number of queries?: ";
    int query;
    cin >> query;
    while(query--){
        cout << "Enter the character: ";
        char ch;
        cin >> ch;
        cout << hash[ch] << endl;
    }
}