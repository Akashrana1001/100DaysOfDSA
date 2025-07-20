#include <bits/stdc++.h>
using namespace std;
//we are finding the max elemt using recursion;


int findmax(int a,vector<int>arr,int i,int max){
    if(i==a){
       return max;

    }

    if(max<arr[i]){
        max=arr[i];
        return findmax(a,arr,i+1,max);
    }

    return findmax(a,arr,i+1,max);
}



int main(){
    int a;
    cin>>a;
    vector<int> vec(a);
    for(int i=0;i<a;i++){
        cin>>vec[i];
    }
    int i=0;
     int max = INT_MIN;
    int ans =findmax( a,vec,i,max);
    cout<<ans;
    return 0;
}