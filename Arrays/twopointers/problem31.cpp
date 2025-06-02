// Remove All Occurrences of an Element in an Array

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

    int target;
    cin >> target;

    int slow=0;
    for(int fast=0;fast<n;fast++){
        if(arr[fast]!=target){
            arr[slow++]=arr[fast];
        }
        
    }
    cout<<slow<<" is the new array length"<<endl;

    for(int i=0;i<slow;i++){
        cout<<arr[i]<<" ";
    }



    return 0;

}