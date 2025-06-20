#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void findClosestPair(vector<int>& arr1, vector<int>& arr2, int x) {
    int m = arr1.size();
    int n = arr2.size();

    int i = 0;           // pointer for arr1
    int j = n - 1;       // pointer for arr2
    int minDiff = INT_MAX;
    int res1 = 0, res2 = 0;

    while (i < m && j >= 0) {
        int sum = arr1[i] + arr2[j];
        int diff = abs(sum - x);

        // Update result if current diff is smaller
        if (diff < minDiff) {
            minDiff = diff;
            res1 = arr1[i];
            res2 = arr2[j];
        }

        // Move pointers
        if (sum > x)
            j--;  // sum too big, decrease it
        else
            i++;  // sum too small, increase it
    }

    cout << res1 << " and " << res2 << endl;
}

int main() {
    vector<int> arr1 = {1, 4, 5, 7};
    vector<int> arr2 = {10, 20, 30, 40};
    int x = 32;

    findClosestPair(arr1, arr2, x);  // Output: 1 and 30

    x = 50;
    findClosestPair(arr1, arr2, x);  // Output: 7 and 40

    return 0;
}
