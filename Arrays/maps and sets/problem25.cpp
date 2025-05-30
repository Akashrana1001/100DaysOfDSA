
// longest Subarray With Equal Number of 0s and 1s
#include <iostream>
#include <unordered_map>
using namespace std;

int maxLen(int arr[], int n) {
    unordered_map<int, int> mp;
    int preSum = 0;
    int res = 0;

    for (int i = 0; i < n; i++) {
        // Convert 0 to -1 to make the problem similar to finding subarray with sum 0
        preSum += (arr[i] == 0) ? -1 : 1;

        // If sum is 0, longest till now is i+1
        if (preSum == 0)
            res = i + 1;

        // If this prefix sum was seen before, get the length of subarray
        if (mp.find(preSum) != mp.end())
            res = max(res, i - mp[preSum]);
        else
            mp[preSum] = i;
    }

    return res;
}

int main() {
    int arr[] = {0, 1, 1, 1, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Length of longest subarray with equal 0s and 1s: " << maxLen(arr, n) << endl;
    return 0;
}
