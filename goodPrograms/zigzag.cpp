#include <bits/stdc++.h>
using namespace std;



string convert(string s, int numRows) {
    vector<vector<string>> vec(4, vector<string>(10));
    int length = s.size();
    int c = 0;
    int i = 0, j = 0;
    int rep = 0;
    string newS = "";

    while(c < length && c < numRows){
        vec[i][j] = s[c];
        i++;
        c++;
    }
    i--;

    while(c < length){
        rep = 0;
        // diagonal iteration
        while(rep < numRows - 1 && c < length){
            i--;
            j++;
            vec[i][j] = s[c];
            rep++;
            c++;
        }

        rep = 0;
        //downward iteration
        while(rep < numRows - 1 && c < length){
            i++;
            vec[i][j] = s[c];
            rep++;
            c++;
        }
    }
    
    for(auto it1 : vec){
        for(auto it2 : it1){
            cout << it2;
        }
        cout << endl;
    }
    for(auto it1 : vec){
        for(auto it2 : it1){
            newS += it2;
        }
    }

    return newS;
}

int main(){
    // convert("ABHYANSHUSHAH", 3);
    cout << convert("PAYPALISHIRING", 4);
}