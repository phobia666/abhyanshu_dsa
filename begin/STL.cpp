#include<bits/stdc++.h>
using namespace std;

//CONTAINERS
void par(){
    cout << "hello" << endl;

    pair<int, int> p = {5, 9};
    pair<string, string> st = {"Abhyanshu", "AceHaze"};
    
    cout << p.first << " is smaller than " << p.second;
    cout << st.first << " is " << st.second;
}

void vectors(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    // cout << vec[1];
    
    // for(int i = 0; i < v.size(); i++){
    //     cout << *(it) << " ";
    //     it++;
    // }
    // cout << endl <<  "n print " << endl;

    // vector<int> :: iterator en = v.end();
    // cout << *(--en);

    // cout << vec.capacity() << "capacity ";
    // cout << vec.front() << " " << vec.back();

    // for(vector<int> :: iterator it = v.begin(); it != v.end(); it++){
    //     cout << *(it) << " ";
    // }

    // for(auto it = v.begin(); it != v.end(); it++){
    //     cout << *(it) << " ";
    // }

    for(auto it : v) cout << it << " ";
    cout << endl;

    v.erase(v.begin() + 2);
    
    //30 erased
    for(auto it : v) cout << it << " ";
    cout << endl;

    v.erase(v.begin() + 2, v.begin() + 4);

    
    //40 and 50 erased
    for(auto it : v) cout << it << " ";
    cout << endl;
    
    v.insert(v.begin(), 100);

    // 100 inserted
    for(auto it : v) cout << it << " ";
    cout << endl;

    v.insert(v.begin() + 1, 2, 96); // number of times you want to add numbers 

    // 2 times 96 inserted
    for(auto it : v) cout << it << " ";
    cout << endl;

    v.pop_back();

    //popped one element back
    for(auto it : v) cout << it << " ";
    cout << endl;

    cout << v.empty();
}

void linkedList(){
    list<int> ls(2, 100);
    ls.push_front(50);
    ls.push_back(50);

    for(auto it : ls){
        cout << it << " ";
    }
    // Remember one thing, .emplace_back() has a lesser time complexity than .push_back()
    // for vector as well as linkedLists.
    // rest functions of linkedLists are same as vector.
}

void deq(){
    deque<int> dq(3, 39);
    dq.push_back(56);

    //exactly the same as the other two
}

void staack(){ //LIFO
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout << "top: " << st.top() << endl;

    st.pop();
    cout << "top: "<< st.top() << endl;
    //push pop top the only primary functions of stack

    cout << "size: " << st.size() << endl;
    cout << "empty: " << st.empty() << endl;

}

void Que(){ //FIFO
    queue<int> qu;
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(4);
    qu.push(5);

    qu.pop();

    cout << qu.front() << " " << qu.back();
}

void priQue(){ //lexicographically stores data
    //maximum heap
    priority_queue<int> prq;
    prq.push(6);
    prq.push(8);
    prq.push(5);
    prq.push(2);
    
    //{2, 5, 6, 8}
    cout << "top: " << prq.top() << endl;

    prq.pop();

    cout << "popped!" << endl;
    cout << "top: " << prq.top() << endl;

    //minimum heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(6);
    pq.push(8);
    pq.push(5);
    pq.push(2);

    //{8, 6, 5, 2}
    cout << "top: " << pq.top() << endl;

    pq.pop();

    cout << "popped!" << endl;
    cout << "top: " << pq.top() << endl;

    /*Time complexities
        push - logN
        top - O(1) 
        pop - logN*/
        

}

void Set(){ // stores data in sorted as well as unique order

    set<int> st;
    st.insert(7);
    st.insert(7);
    st.emplace(4);
    st.insert(3);
    st.insert(10);

    //{3, 4, 7, 10}

    auto it = st.find(7);
    st.erase(it); //erases 7(using iterator) takes constant time
    // {3, 4, 10}

    st.erase(3); // erases 3 takes logarithimic time
    // {4, 10}

    st.insert(5);
    st.insert(2);
    st.insert(12);
    st.insert(14);
    // {2, 4, 5, 12, 14}

    //series erase
    auto it1 = st.find(4);
    auto it2 = st.find(12);
    st.erase(it1, it2); // erases 4 and 5 (end se ek kam hatata hai yad rakhna!)

    //checks whether given element is present or not
    cout << st.count(10) << endl;

    // baki to same functions use hote isme bhi as vector

}

void multiSet(){ // Set is sorted but no unique elements

    multiset<int> ms;
    ms.insert(7);
    ms.insert(7);
    ms.insert(7);
    ms.emplace(4);
    ms.insert(3);
    ms.insert(10);
    // {3, 4, 7, 7, 7, 10}

    int cnt = ms.count(7);
    //returns index

    auto it = ms.find(7);
    ms.erase(it);
    // erase jus the first ocurrence of 7;

    ms.erase(7);
    // erases every occurences of 7


}

void USet(){ // Set is not  sorted and no unique elements
    unordered_set<int> us;

    // same set stuff but with no orderness and uniqueness
    // every other functions works jus like that except for lower bound and upper bound 
}

void mmp(){ // Have keys and values... only the keys are stored in sorted and unique order
    map<int, int> mp;

    mp[1] = 4;
    mp.insert({3, 5});
    mp.emplace(2, 9);

    // for(auto it : mp){
    //     cout << it.first << " " << it.second << endl;
    // }

    auto it = mp.find(3);
    cout << it->second;

}

void Extra(){

    int a[] = {5, 4, 3, 9, 7, 2, 6, 4, 1, 3, 8, 7};

    // increasing order
    sort(a, a + 12);
    for(int i : a) cout << i << " "; 
    cout << endl;

    // decreasing order
    sort(a, a + 12, greater<int>());
    for(int i : a) cout << i << " ";
    cout << endl;

}


int main(){
    Extra();
    return 0;
}