

#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int minRemovals(vector<int> &arr, int k) {
    int total = 0, n = arr.size();
    for (int num : arr)
        total += num;

    int target = total - k;

    if (target == 0)
        return n;

    int left = 0, currSum = 0, maxLen = -1;

    for (int right = 0; right < n; right++) {
        currSum += arr[right];

      
        while (left < right && currSum > target) {
            currSum -= arr[left++];
        }

        if (currSum == target) {
            maxLen = max(maxLen, right - left + 1);
        }
    }

  
    return maxLen == -1 ? -1 : n - maxLen;
}

int main() {
    vector<int> arr = {3, 4, 1, 3, 2};
    int k = 5;
    cout << minRemovals(arr, k) << endl;
    return 0;
}