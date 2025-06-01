#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Input the size of the array
    int a;
    cin >> a;
    
    // Create a vector of size a
    vector<int> v(a);
    
    // Input the elements of the array
    for (int i = 0; i < a; i++) {
        cin >> v[i];
    }

    // Edge case: if the array is empty
    if (a == 0) {
        cout << 0;
        return 0;
    }

    // Two pointers approach
    int slow = 0;
    for (int fast = 1; fast < a; fast++) {
        if (v[slow] != v[fast]) {
            slow++;
            v[slow] = v[fast];
        }
    }

    // Output the length of the array after removing duplicates
    cout << slow + 1 << endl;

    // Optional: Print the modified array (for clarity)
    for (int i = 0; i <= slow; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
