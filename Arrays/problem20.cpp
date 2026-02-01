#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[] = {1, 2, 4, 6}; 
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    unordered_set<int> present;
    for (int i = 0; i < arrSize; i++) {
        present.insert(arr[i]);
    }

    cout << "Missing numbers: ";
    for (int i = 1; i <= n; i++) {
        if (present.find(i) == present.end()) {
            cout << i << " ";
        }
    }

    return 0;
}
