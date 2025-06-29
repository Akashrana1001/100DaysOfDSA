#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int longestSubarrayDivK(vector<int> &arr, int k) {
    unordered_map<int, int> prefIdx; // remainder → first index
    int sum = 0, res = 0;
    
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        int rem = sum % k;

        // Handle negative remainder
        if (rem < 0) rem += k;

        if (rem == 0)
            res = i + 1;
        else if (prefIdx.find(rem) != prefIdx.end())
            res = max(res, i - prefIdx[rem]);
        else
            prefIdx[rem] = i;
    }

    return res;
}

int main() {
    vector<int> arr = {2, 7, 6, 1, 4, 5};
    int k = 3;

    cout << longestSubarrayDivK(arr, k) << endl;
    return 0;
}
