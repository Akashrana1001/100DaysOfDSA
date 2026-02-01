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
    // Minimum Size Subarray Sum (Variable Window Size) 
    int minlen=a+1;
    int start=0;
    int sum=0;
    for(int end=0;end<a;end++){
        sum+=arr[end];

        while(sum>=k){
            minlen=min(minlen,end-start+1);
            sum-=arr[start];
            start++;
        }
    }

    cout<<minlen<<" is the min length of the subarray";
   
    return 0;
}