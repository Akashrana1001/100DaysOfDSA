#include <iostream>
#include <unordered_map>
#include <utility> 
using namespace std;

// Maximum number of possible pairs (just a safe upper limit)
#define MAX_PAIRS 100

int distinctPairs(int arr[], int n, int target, pair<int, int> res[]) {
    unordered_map<int, int> freq;
    int count = 0;

    for (int i = 0; i < n; i++) {
        int complement = target - arr[i];

        if (complement == arr[i]) {
            if (freq[complement] == 1) {
                res[count++] = make_pair(arr[i], arr[i]);
            }
        } else if (freq[complement] > 0 && freq[arr[i]] == 0) {
            int first = min(arr[i], complement);
            int second = max(arr[i], complement);
            res[count++] = make_pair(first, second);
        }

        freq[arr[i]]++;
    }

    return count;
}

int main() {
    int arr[] = {1, 5, 7, -1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 6;

    pair<int, int> res[MAX_PAIRS];
    int count = distinctPairs(arr, n, target, res);

    for (int i = 0; i < count; i++) {
        cout << res[i].first << " " << res[i].second << endl;
    }

    return 0;
}
