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

    int k;
    cin>>k;
    //we have to find the max sum in the k size window;
    
    int maxsum=0;
    int windowsum=0;

    for(int i=0;i<k;i++){
        windowsum+=arr[i];
    }
    maxsum=windowsum;

    for(int i=k;i<a;i++){
        // wewill add a new element and remove the last element
        windowsum+=arr[i]-arr[i-k];
        maxsum=max(maxsum,windowsum);
    }

    cout<<maxsum<<" is the max sum of k size window in this array";

    
   
    return 0;
}