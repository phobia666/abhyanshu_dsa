#include <bits/stdc++.h>
using namespace std;

//for given row and column print the element in the pascal's triangle

int elemAt(int row, int col){
    //there is this formula for finding the element at the position of r and c
    // (r-1)C(c-1) combination formula

    int ans = 1;

    for(int i = 0; i < col - 1; i++){
        ans *= (row - 1 - i);
        ans /= (i + 1);
    }

    return ans;
}

int main(){
    int row = 5, col = 3;

    cout << elemAt(row, col);
}