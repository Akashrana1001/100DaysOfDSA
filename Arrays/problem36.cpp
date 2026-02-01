#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool checksubset(vector<int>& arr, vector<int>& arr2) {
    unordered_map<int, int> mapp;
    
    // Count frequency of elements in arr
    for (int i = 0; i < arr.size(); i++) {
        mapp[arr[i]]++;
    }

    // Check if every element in arr2 exists in arr
    for (int i = 0; i < arr2.size(); i++) {
        if (mapp[arr2[i]] == 0) {
            return false;
        }
        mapp[arr2[i]]--; // Reduce count if used
    }

    return true;
}

int main() {
    int a;
    cin >> a;
    vector<int> arr(a);

    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    int b;
    cin >> b;
    vector<int> arr2(b);  // ✅ Corrected this line

    for (int i = 0; i < b; i++) {
        cin >> arr2[i];
    }

    if (checksubset(arr, arr2)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}
