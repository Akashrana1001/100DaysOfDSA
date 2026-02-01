//Longest subarray for a target sum;
#include <iostream>
#include <unordered_map>
using namespace std;

int longestSubarray(int arr[], int n, int k) {
    int res = 0;
    int abtkkasum = 0;

    unordered_map<int, int> mapp;

    for (int i = 0; i < n; i++) {
        abtkkasum += arr[i];

        // Check if sum from index 0 to i is exactly k
        if (abtkkasum == k) {
            res = i + 1;
        }

        // Check if there's a prefix sum that makes subarray sum = k
        if (mapp.find(abtkkasum - k) != mapp.end()) {
            res = max(res, i - mapp[abtkkasum - k]);
        }

        // Store the first occurrence of this prefix sum
        if (mapp.find(abtkkasum) == mapp.end()) {
            mapp[abtkkasum] = i;
        }
    }

    return res;
}

int main() {
    int arr[] = {10, 5, 2, 7, 1, -10};
    int k = 15;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Longest subarray length with sum " << k << " is: ";
    cout << longestSubarray(arr, n, k) << endl;

    return 0;
}
