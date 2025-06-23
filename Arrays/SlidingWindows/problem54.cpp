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
    int maxsum = INT_MIN;

    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    maxsum = sum;
    //fromm  here we will slide th ewindoe

    for(int i=k;i<a;i++){
        sum +=arr[i]-arr[i-k];
        maxsum= max(maxsum,sum);
    }
    cout<<maxsum;
}
