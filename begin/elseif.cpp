#include <bits/stdc++.h>

using namespace std;

int main(){
    int marks;
    char grade;
    cout << "Marks scored by particular candidate: ";
    cin >> marks;
    if (marks < 25)
    grade = 'F';
    else if(marks < 45)
    grade = 'E';
    else if(marks < 50)
    grade = 'D';
    else if(marks < 60)
    grade = 'C';
    else if(marks < 80)
    grade = 'B';
    else if(marks <= 100)
    grade = 'A';
    else 
    cout << "Grade is unknown";

    cout << "Grade: " << grade;

    return 0;
}
