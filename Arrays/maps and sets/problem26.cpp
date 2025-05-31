#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;

// Function to sort arr according to the order of arr2
void relativesort(vector<int>& arr, int a, vector<int>& arr2, int b) {
    // Map to count the frequency of each element in arr
    unordered_map<int, int> freq;

    for (int i = 0; i < a; i++) {
        freq[arr[i]]++;
    }

    // Vector to store result in required order
    vector<int> result;

    // First, insert elements that are present in arr2
    for (int i = 0; i < b; i++) {
        int num = arr2[i];
        while (freq[num] > 0) {
            result.push_back(num);
            freq[num]--;
        }
        freq.erase(num); // Remove processed element
    }

    // Add remaining elements from arr (not in arr2) and sort them
    vector<int> remaining;
    for (auto& it : freq) {
        while (it.second-- > 0) {
            remaining.push_back(it.first);
        }
    }

    sort(remaining.begin(), remaining.end());

    // Combine result and remaining
    result.insert(result.end(), remaining.begin(), remaining.end());

    // Copy result back to arr
    arr = result;
}

// Utility function to print array
void printarr(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int a;
    cin >> a;

    vector<int> arr(a);
    for (int i = 0; i < a; i++) {
        cin >> arr[i]; // Fixed typo (was v[i])
    }

    int b;
    cin >> b;
    vector<int> arr2(b);
    for (int i = 0; i < b; i++) {
        cin >> arr2[i];
    }

    relativesort(arr, a, arr2, b);
    printarr(arr);

    return 0;
}
