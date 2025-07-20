#include <bits/stdc++.h>
using namespace std;
//we are aplying binary search in recursion


int binaryfunction(vector<int>arr,int target,int start,int end ){
    if(start>end){
        return -1;
    }

    int mid = start  + (end-start)/2;
    if(arr[mid]==target){
        // cout<<mid<<endl;
        return mid;
    }
    if(arr[mid] < target){
        return binaryfunction(arr,target,mid+1,end);
    }
     
    return binaryfunction(arr,target,start,mid-1);
}

int main(){
    int a;
    cin>>a;
    vector<int> vec(a);
    for(int i=0;i<a;i++){
        cin>>vec[i];
    }

    int target;
    cin>>target;

    int start=0;
    int end=a-1;

    int ans= binaryfunction(vec,target,start,end);
    cout<<ans;
}