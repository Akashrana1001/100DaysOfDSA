#include <bits/stdc++.h>
using namespace std;

bool canPairs(vector<int> arr, int k) {
  
    if (arr.size() % 2 != 0)
        return false;

    vector<int> freq(k);

    for (int x : arr) {
        int rem = x % k;
        
        if (freq[(k - rem) % k] != 0)
            freq[(k - rem) % k]--;
      
      
        else
            freq[rem]++;
    }

    
    for (int count : freq) {
        if (count != 0)
            return false;
    }

    return true;
}

int main() {
    vector<int> arr = {92, 75, 65, 48, 45, 35};
    int k = 10;
    cout << (canPairs(arr, k) ? "True" : "False");
    return 0;
}