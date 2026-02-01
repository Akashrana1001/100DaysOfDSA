#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int a;
    cout << "Enter the size of the first array: ";
    cin >> a;

    int* arr = new int[a];
    cout << "Enter " << a << " elements for the first array: ";
    for (int i = 0; i < a; ++i) {
        cin >> arr[i];
    }

    int b;
    cout << "Enter the size of the second array: ";
    cin >> b;

    int* arr2 = new int[b];
    cout << "Enter " << b << " elements for the second array: ";
    for (int i = 0; i < b; ++i) {
        cin >> arr2[i];
    }

    vector<int> newarr;
    unordered_map<int, int> freq;

    for (int i = 0; i < a; ++i) {
        freq[arr[i]]++;
    }

    for (int i = 0; i < b; ++i) {
        if (freq[arr2[i]] > 0) {
            newarr.push_back(arr2[i]);
            freq[arr2[i]]--;
        }
    }

    cout << "Intersection of the two arrays: ";
    for (size_t i = 0; i < newarr.size(); ++i) {
        cout << newarr[i] << " ";
    }
    cout << endl;

    return 0;
}