#include <bits/stdc++.h>
using namespace std;

void pascalRow(int row){
    vector<int> ans;
    ans.push_back(1);
    int nume = row - 1;
    int deno = 1;
    int prod = 1;

    while(nume != 0){
       prod = prod * nume;
       prod = prod / deno;
       ans.push_back(prod);
       nume--;
       deno++;
    }

    ans.push_back(1);

    for(int i = 0; i < row; i++){
        cout << ans[i] << " ";
    }
}

int main(){
    int row = 9;
    pascalRow(row);
}