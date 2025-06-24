#include <iostream>
#include <vector>
#include <climits>
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
    
    int sum=0;
    int minlen = INT_MAX;
    int start=0;

    for(int end=0;end<a;end++){
        sum+=arr[end];

        while(sum>=k){
            minlen = min(minlen,end - start +1);
            sum = sum-arr[start];
            start++;
        }
    }
    if(minlen==INT_MAX){
        cout<<0;
    }
    else{
        cout<<minlen;
    }

}
