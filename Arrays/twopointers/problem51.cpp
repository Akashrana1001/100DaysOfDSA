#include <iostream>
#include <vector>
#include <climits>
#include <algorithm> 
using namespace std;

int main() {
    int a;
    cin >> a;

    if (a < 2) {
        cout << "[]" << endl;
        return 0;
    }

    vector<int> arr(a);
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    sort(arr.begin(), arr.end()); 

    int left = 0, right = arr.size() - 1;
    int closest = INT_MAX;
    int maxabs = -1;
    vector<int> result;

    while (left < right) {
        int sum = arr[left] + arr[right];
        int diff = abs(sum - k);
        int absdiff = abs(arr[right] - arr[left]);

        if (diff < closest || (diff == closest && absdiff > maxabs)) {
            closest = diff;
            maxabs = absdiff;
            result = {arr[left], arr[right]};
        }

        if (sum > k)
            right--;
        else
            left++;
    }

    if (!result.empty()) {
        cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "[]" << endl;
    }

    return 0;
}
