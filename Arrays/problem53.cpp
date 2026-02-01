#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int m;
    cin >> m;

    vector<int> arr(m);
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }

    int mid = m / 2;

    sort(arr.begin() + mid, arr.end());

    int count = 0;

    for (int i = 0; i < mid; i++) {
        int low = mid, high = m - 1;
        int pos = mid - 1;  

        while (low <= high) {
            int midIndex = (low + high) / 2;

            if (arr[i] >= 5 * arr[midIndex]) {
                pos = midIndex;         
                low = midIndex + 1;     
            } else {
                high = midIndex - 1;
            }
        }

        count += (pos - (mid - 1));  
    }

    cout << count << endl;

    return 0;
}
