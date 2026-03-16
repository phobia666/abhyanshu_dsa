#include<bits/stdc++.h>
using namespace std;

bool pall(string str, int s, int e){
    if(s >= e) return true;
    if(str[s] == str[e]){
        return pall(str, s + 1, e - 1);
    }
    return false;
}

int main(){
    string str = "MADAM";
    cout << str << " is a pallindrome? : " << pall(str, 0, str.length() - 1);
}