#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    
    // Input validation
    if (n <= 0 || n > 100000) {
        cout << "Invalid array size. Please enter a size between 1 and 100000." << endl;
        return 1;
    }
    
    vector<int> arr(n);
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Use unordered_map for better performance and dynamic sizing
    // This eliminates the need for a fixed-size hash array
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }
    
    cout << "Number of queries?: ";
    int query;
    cin >> query;
    
    // Input validation for queries
    if (query <= 0 || query > 100000) {
        cout << "Invalid number of queries. Please enter a number between 1 and 100000." << endl;
        return 1;
    }
    
    cout << "Enter " << query << " numbers to query:" << endl;
    while (query--) {
        int number;
        cin >> number;
        
        // Using find() method for better performance
        auto it = hash.find(number);
        if (it != hash.end()) {
            cout << "Frequency of " << number << ": " << it->second << endl;
        } else {
            cout << "Frequency of " << number << ": 0" << endl;
        }
    }
    
    return 0;
}