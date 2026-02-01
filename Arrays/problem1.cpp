#include <bits/stdc++.h>
using namespace std;

int main() {
    // Declaring a 3x4 2D array
    int arr[3][4];
    
    // Initializing the 2D array
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            arr[i][j] = i + j;
        }
    }
    
    // Printing the 2D array

    // Creating a 2D vector
    vector<vector<int>> vec(3, vector<int>(4, 0));  // 3x4 vector initialized with 0s
    
    // Initializing the 2D vector
    for(int i = 0; i < vec.size(); i++) {
        for(int j = 0; j < vec[0].size(); j++) {
            vec[i][j] = i + j;
        }
    }
    
    // Printing the 2D vector
    cout << "\n2D Vector elements:" << endl;
    for(const auto& row : vec) {
        for(int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    cout << "2D Array elements:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Another way to initialize 2D array
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    return 0;
}