#include <bits/stdc++.h>
using namespace std;

// void printName(string name){
//     cout << "Hey " << name;
    
//     for(int i = 0; i < 10; i++){
//         cout << "Hey " << name << endl;
//     }
// }
// }
// int main(){

//     string name;
//     cout << "What's your name? \n";
//     getline(cin, name);
//     printName(name);
//     return 0;

// }
// void maxx(int num1, int num2){
//     cout << "max: " << max(num1, num2);
// }

// int main(){
    
//     string name;
//     cout << "What's your name? \n";
//     getline(cin, name);
//     printName(name);

//     cout << "Enter two numbers" << endl;
//     int num1, num2;
//     cin >> num1 >> num2;
//     maxx(num1, num2);

// }

void value(int num){
    num = num * 10;
    cout << num << endl;
}

void reference(int &num){
    num = num * 10;
    cout << num << endl;
}

int main(){
    int x = 5;
    cout << "Pass" << endl;
    value(x);
    cout << x << endl;

    cout << "Reference" << endl;
    reference(x);
    cout << x << endl;

}


