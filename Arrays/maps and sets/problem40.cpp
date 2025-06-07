// C++ Program to count all pairs with difference equal to k
// using Hash Map

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int countPairs(vector<int> &arr, int k) {
    int n = arr.size();  
    unordered_map<int, int> freq;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
      
        if (freq.find(arr[i] + k) != freq.end()) 
            cnt += freq[arr[i] + k]; 
      
        if (freq.find(arr[i] - k) != freq.end()) 
            cnt += freq[arr[i] - k]; 
      
        freq[arr[i]]++; 
    }
    return cnt;
}

int main() {
    vector<int> arr = {1, 4, 1, 4, 5};
    int k = 3;

    cout << countPairs(arr, k);
    return 0;
}