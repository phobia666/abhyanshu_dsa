#include <bits/stdc++.h>
using namespace std;

//extracting factors
void fac(int n){
    vector <int> fc;

    cout << endl;
    for(int i = 1; i < sqrt(n); i++){
        if(n % i == 0){
            if(i == sqrt(n))
            fc.push_back(i);
            else
            fc.push_back(i);
            fc.push_back(n / i);
        }
    }
    sort(fc.begin(), fc.end());

    for(auto it : fc){
        cout << it << " ";
    }

}

int main(){
    bool cnd;
    do{
        int n;
        cout << "Enter the number ";
        cin >> n;
        fac(n);
        cout << "Want to go at it again? 1/0? ";
        cin >> cnd;
    }while(cnd);
}