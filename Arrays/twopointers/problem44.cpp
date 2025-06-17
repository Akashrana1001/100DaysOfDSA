#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a;
    cin>>a;

    vector<int>arr(a);
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }

    //find the duplicate number if the array is sorted
    
    int slow=0;
    int fast=1;
    while(fast<a){
        if(arr[slow]!=arr[fast]){
            slow++;
            fast++;
        }
        else{
            cout<<arr[slow]<<" ";
            break;
        }
    }

    return 0;
}