// Move all zeros to end of array

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count=0;

    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }

    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}