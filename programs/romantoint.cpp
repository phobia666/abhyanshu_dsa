#include<bits/stdc++.h>
using namespace std;


int romanToInt(string s){
    int num = 0;
    int len = s.length();
    vector<int> v(100);

    for(int i = 0; i < len; i++){
        switch(s[i]){
            case 'I': v[i] = 1;
            break;
            case 'V': v[i] = 5;
            break;
            case 'X': v[i] = 10;
            break;
            case 'L': v[i] = 50;
            break;
            case 'C': v[i] = 100;
            break;
            case 'D': v[i] = 500;
            break;
            case 'M': v[i] = 1000;
            break;
            default: return -1;
        }
        if(i == 0 || v[i] <= v[i - 1]){
            num += v[i];
        }
        else{
            num += v[i] - 2 * v[i - 1];
        }
    }
    return num;
}

int main(){
    string s;
    cin >> s;
    cout << romanToInt(s);
}