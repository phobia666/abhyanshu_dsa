#include<bits/stdc++.h>
using namespace std;


// bool extremes(string para, int s, int e){
//     while(s < e){
//         if((para[s] == '(' && para[e] == ')') || (para[s] == '{' && para[e] == '}') || (para[s] == '[' && para[e] == ']')){
//             s++;
//             e--;
//         }
//         else{
//             return false;
//         }
//     }
//     return true;
// }

// bool paar(string para){

    
//     int i = 0;
//     while(i < para.size() - 1){
//         if((para[i] == '(') && (para[i + 1] == ')') || (para[i] == '{' && para[i + 1] == '}') || (para[i] == '[' && para[i + 1] == ']')){
//             i = i + 2;
//         }
//         else return false;
//     }
//     return true;
// }
// bool isValid(string para) {
//     if(para.size() % 2 != 0) return false;
//         if(para.size() == 1) return false;
//         if(extremes(para, 0, para.size() - 1) || paar(para)) return true;
//         else return false;
// }





bool isValid(string para){
    stack<char> st;

    for (char c : para) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else {
            if (st.empty()) return false;
            char top = st.top();
            st.pop();

            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false;
            }
        }
    }
    return st.empty();
}
int main(){
    string para;
    cout << "Enter the parenthesis string: ";
    cin >> para;
    cout << isValid(para);
}
