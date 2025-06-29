#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
using namespace std;

void groupByFrequency(const vector<int>& arr) {
    unordered_map<int, int> freqMap;  // element -> frequency
    map<int, vector<int>> groupMap;   // frequency -> list of elements

    // Step 1: Count frequencies
    for (int num : arr) {
        freqMap[num]++;
    }

    // Step 2: Group by frequency
    for (const auto& entry : freqMap) {
        int element = entry.first;
        int freq = entry.second;
        groupMap[freq].push_back(element);
    }

    // Step 3: Print grouped elements
    for (const auto& group : groupMap) {
        int freq = group.first;
        const vector<int>& elements = group.second;
        cout << "Frequency " << freq << ": ";
        for (int x : elements) {
            cout << x << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<int> arr = {3, 3, 1, 2, 2, 2, 4, 4};
    groupByFrequency(arr);
    return 0;
}
