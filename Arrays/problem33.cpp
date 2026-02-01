// C++ program to sort an array of 0s, 1s and 2s 
// using Dutch National Flag Algorithm

#include <iostream>
#include <vector>
using namespace std;

// Function to sort an array of 0s, 1s and 2s

void sort012(vector<int>&arr){
    int mid=0;
    int low=0;
    int high=arr.size()-1;
  while(mid <= high){
    if(arr[mid] == 0){
        swap(arr[mid++], arr[low++]);
    }
    else if(arr[mid] == 1){
        mid++;
    }
    else { // arr[mid] == 2
        swap(arr[mid], arr[high--]);
    }
}

}


int main() {
    vector<int> arr = { 0, 1, 2, 0, 1, 2 };
    int n = arr.size();

    sort012(arr);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}