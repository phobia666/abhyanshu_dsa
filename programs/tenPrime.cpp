#include <bits/stdc++.h>
using namespace std;


bool prime(int x){
    int f = 0;
    for(int i = 1; i <= x; i++){
        if(x % i == 0) f++;
    }
    if(f == 2) return true;
    return false;
}

int main(){
    int count = 1;
    int pointer = 2;

    while(count <= 10){
        if(prime(pointer)){
            cout << pointer << " ";
            count++;
        }
        pointer++;
    }
}