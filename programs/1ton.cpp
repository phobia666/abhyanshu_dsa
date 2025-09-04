#include <bits/stdc++.h>
using namespace std;

void rev(int i){
    if(i == 0) return;
    
    rev(i - 1);
    cout << i << endl;
}

int main(){
    int n;
    cin >> n;
    rev(n);
}