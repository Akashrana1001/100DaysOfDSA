#include <iostream>
#include <vector>
using namespace std;

int duplicate(vector<int>&arr){
    int slow=arr[0]; int fast=arr[0];

    while(true){
        slow = arr[slow];
        fast=arr[arr[fast]];
        if(slow==fast)
            break;
    }
    
    //re initialize the slow
    slow= arr[0];
    while(slow!=fast){
        slow=arr[slow];
        fast=arr[fast];
    }
    return slow;
}

int main(){
    int a;
    cin>>a;

    vector<int>arr(a);
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }

    cout<<duplicate(arr)<<" is the duplicate number ";
    
   
    return 0;
}