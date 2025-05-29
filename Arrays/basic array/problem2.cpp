//kadane algo
#include <iostream>
#include <climits>
using namespace std;


int kadanealgo(int a,int arr[]){
    int maxsum=INT_MIN;
    int currentsum=arr[0];

    for(int i=1;i<a;i++){
        //current sum 
        currentsum=currentsum+arr[i];
        if(currentsum>maxsum){
            maxsum=currentsum;
        }

        if(currentsum<0){
            currentsum=0;
        }
    }
    return maxsum;
}

int main(){
    int a;
    cin>>a;
    
    int * arr = new int[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }

    // we have to find the max sum of a subarray
    cout<<kadanealgo(a,arr);
    return 0;
}