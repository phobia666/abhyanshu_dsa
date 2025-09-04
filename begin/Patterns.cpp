#include <bits/stdc++.h>

using namespace std;

void pat1(int n){ // increment stars
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pat2(int n){ // increment nos
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        cout << endl;
    }
}

void pat3(int n){ // same nos

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << i;
        }
        cout << endl;
    }
}

void pat4(int n){ // decrement stars

    for(int i = n; i > 0; i--){
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pat5(int n){ // sym. incr. stars

    
    for(int i = 0; i <= n; i++){

        for(int x = 0; x < n - i - 1; x++){
            cout << " ";
        }

        for(int q = 1; q <= i * 2 + 1; q++){
            cout << "*";
        }

        for(int x = 0; x < n - i - 1; x++){
            cout << " ";
        }
        cout << endl;
    }

}

void pat6(int n){ // sym. decr. stars

    
    for(int i = 0; i < n; i++){

        for(int x = 0; x < i; x++){
            cout << " ";
        }

        for(int q = (n - i - 1) * 2 + 1; q > 0; q--){
            cout << "*";
        }

        for(int x = 0; x < i; x++){
            cout << " ";
        }
        cout << endl;
    }

}

void pat7(int n){ // triangle stars
    for(int i = 1; i <= 2 * n - 1; i++){
        int stars = i;
        if(i > n) stars = 2 * n - i;

        for(int j = 1; j <= stars; j++) cout << "* ";
        cout << endl;
    }

}

void pat8(int n){ // binary

    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            for(int j = 1; j <= i / 2; j++){
                cout << "01";
            }
        }
        else{
            for(int j = 1; j <= i / 2; j++){
                cout << "10";
            }
            cout << "1";
        }
        cout << endl;
    }
}

void pat9(int n){ // num valley
    
    for(int i = 1; i <= n; i++){
        //num incr.
        for(int j = 1; j <= i; j++){
            cout << j;
        }

        //space
        for(int j = 1; j <= (n - i) * 2; j++){
            cout << " ";
        }

        //num decr.
        for(int j = i; j >= 1; j--){
            cout << j;
        }
        cout << endl;
    }
}

void pat10(int n){ // alphabets

    for(int i = 0; i < n; i++){
        for(char ch = 'A'; ch <= 'A' + i; ch++){
            cout << ch << " ";
        }
        cout << endl;

    }
    
}

void pat11(int n){ //ABCBA
    char ph = 'A';

    for(int i = 0; i < n; i++){
        //space
        for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }

        //incr. alpha
        for(char ch = 'A'; ch <= 'A' + i - 1; ch++){
            cout << ch;
        }

        //ph
        cout << ph++;

        //decre. alpha
        for(char ch = 'A' + i - 1; ch >= 'A'; ch--){
            cout << ch;
        }

        //space
        for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }
        
        cout << endl;

    }
}

void pat12(int n){ // ED

    if(n <= 5){
        for(int i = 0; i < n; i++){
            for(char ch = 'E' - i; ch <= 'E'; ch++){
            cout << ch;
        }
        cout << endl;
    }
    }
    
}

void pat13(int n){ // oval

    for(int i = 0; i < n; i++){
        //star
        for(int j = 0; j < n - i; j++){
            cout << "*";
        }

        //space
        for(int j = 0; j < i * 2; j++){
            cout << " ";
        }

        //star
        for(int j = 0; j < n - i; j++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i = 0; i < n; i++){
        //star
        for(int j = 0; j < i + 1; j++){
            cout << "*";
        }

        //space
        for(int j = 0; j < (n - i - 1) * 2; j++){
            cout << " ";
        }

        //star
        for(int j = 0; j < i + 1; j++){
            cout << "*";
        }
        cout << endl;
    }

}

void pat14(int n){ // butterfly(quick)


    for(int i = 1; i <= n * 2 - 1; i++){
        //star
        int stars = i;
        if(i > n) stars = n * 2 - i;
        for(int j = 0; j < stars; j++){
            cout << "*";
        }

        //space
        int spaces = (n - i) * 2 ;
        if(i > n) spaces = (i - n) * 2;
        for(int j = 0; j < spaces; j++){
            cout << " ";
        }

        //star
        for(int j = 0; j < stars; j++){
            cout << "*";
        }
        cout << endl;
    }

}

void pat15(int n){ // square

    for(int i = 1; i <= n; i++){
        if(i == 1 || i == n){
            for(int j = 0; j < n; j++){
                cout << "* ";
            }
        }

        else{
            cout << "* ";

            for(int j = 0; j < n - 2; j++){
                cout << "  ";
            }

            cout << "* ";
        }
        cout << endl;
    }


}

void pat16(int n){
    
}

int main(){
    int n;
    cin >> n;
    pat15(n);
}