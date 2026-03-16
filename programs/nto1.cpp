#include <bits/stdc++.h>
using namespace std;

void rev(int i, int n){
    if(i > n) return;
    rev(i + 1, n);
    cout << i << endl;
}

int main(){
    int n;
    cin >> n;
    rev(1, n);
}