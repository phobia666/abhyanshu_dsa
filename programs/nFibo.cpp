#include<bits/stdc++.h>
using namespace std;

// int fibo(int count, int n, int a, int b){
//     int t;
//     if(n <= 1) return n;
//     if(count == n) return b;

//     t = b;
//     b += a;
//     a = t;

//     return fibo(count + 1, n, a, b);
// }

// int main(){
//     int n;
//     cout << "Nth Fibonacci number ";
//     cin >> n;
//     cout << n << "th fibonacci number is : " << fibo(2, n, 1, 1);
// }

int fibo(int n){
    if(n <= 1) return n;
    int last = fibo(n - 1);
    int slast = fibo(n - 2);

    return last + slast;
}

int main(){
    int n;
    cout << "Nth Fibonacci number ";
    cin >> n;
    cout << n << "th fibonacci number is : " << fibo(n);
}