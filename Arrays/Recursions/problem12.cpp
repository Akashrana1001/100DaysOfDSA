#include <bits/stdc++.h>
using namespace std;

void bubblesort(vector<int>&arr,int n,int i=0){
    if(n==0){
        return;
    }
    if(i==n-1){
      return  bubblesort(arr,n-1,0);
    }

    if(arr[i] > arr[i+1]){
        swap(arr[i],arr[i+1]);
    }

    bubblesort(arr,n,i+1);
}

int main(){
    int a;
    cin>>a;
    
    vector<int> arr(a);
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }

    bubblesort(arr,a);
    
    for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }
}