//check if subarray sum is zero

#include <iostream>
#include <unordered_set>
using namespace std;

bool subarrayWithZeroSum(int arr[], int n) {
    unordered_set<int> prefixSums;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        // Check if sum is 0 or already seen
        if (sum == 0 || prefixSums.find(sum) != prefixSums.end()) {
            return true;
        }

        prefixSums.insert(sum);
    }

    return false;
}
  
int main() {
    int arr[] = {4, 2, -3, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (subarrayWithZeroSum(arr, n)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}
