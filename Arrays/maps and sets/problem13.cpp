#include <iostream>
#include <unordered_map>
using namespace std;

bool areEqual(int arr1[], int arr2[], int n) {
    unordered_map<int, int> freq1;
    unordered_map<int, int> freq2;

    // Count frequencies of arr1
    for (int i = 0; i < n; i++) {
        freq1[arr1[i]]++;
    }

    // Count frequencies of arr2
    for (int i = 0; i < n; i++) {
        freq2[arr2[i]]++;
    }

    // Compare both frequency maps
    return freq1 == freq2;
}

int main() {
    int arr1[] = {1, 2, 3, 1};
    int arr2[] = {3, 1, 2, 1};
    int n = 4;

    if (areEqual(arr1, arr2, n)) {
        cout << "Arrays are equal in elements and frequency." << endl;
    } else {
        cout << "Arrays are NOT equal." << endl;
    }

    return 0;
}
