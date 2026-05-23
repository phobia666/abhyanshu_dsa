#include <bits/stdc++.h>
using namespace std;

//Moore's Voting Algorithm
int major(vector<int> vec){
    int cnt = 0;
    int el;

    for(int i = 0; i < vec.size(); i++){
        if(cnt == 0){
            el = vec[i];
            cnt++;
        }
        else if(vec[i] == el){
            cnt++;
        }
        else{
            cnt--;
        }
    }

    int cnt2 = 0;
    for(int i = 0; i < vec.size(); i++){
        if(vec[i] == el) cnt2++;
    }

    if(cnt2 > vec.size()/2){
        return el;
    }
    else{
        return -1;
    }
}

int main(){
    vector<int> vec = {7, 7, 5, 7, 5, 1, 5, 7, 5, 5, 7, 7, 5, 5 ,5, 5};
    cout << major(vec);

}