//prefix sum
//subarry sum equals k 
#include <bits/stdc++.h>
using namespace std;
int  main(){
    int a;
    cin>>a;
    vector<int>arr(a);
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int count=0;
    unordered_map<int,int>mapp;
    mapp[0]=1;
    int sum=0;
    for(int i=0;i<a;i++){
        //agar koi subarray exist karti hai toh hamara prefix sum equal aaega -k ke  aur isme count kar rhe hain toh hume mapp[0]=1 lena hai  
        sum+=arr[i];
        if(mapp.count(sum-k)){
            count+=mapp[sum-k];
        }
        mapp[sum]++;
    }
    cout<<count;
    return 0;
}