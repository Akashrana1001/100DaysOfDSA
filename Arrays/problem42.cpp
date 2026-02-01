// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <unordered_map>
#include <vector>
int main() {
    // Write C++ code here
    int a;
    cin>>a;
    vector<int> arr(a);
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    
    unordered_map<int,int> subset1;
    unordered_map<int,int>subset2;
     int SubsetSum_1 = 0, SubsetSum_2 = 0;
    for(int i=0;i<a;i++){
        if(arr[i]>0){
            subset1[arr[i]]++;
        }
    }
    
     for(int i=0;i<a;i++){
        if(arr[i]>0 && subset1[arr[i]]==1){
        SubsetSum_1+=arr[i];
        }
    }
    
    for(int i=0;i<a;i++){
        if(arr[i]<0){
            subset2[arr[i]]++;
        }
    }
    for(int i=0;i<a;i++){
        if(arr[i]<0 && subset2[arr[i]]==1){
        SubsetSum_2+=arr[i];
        }
    }
    
    
    
    
    for(int i =0;i<a;i++){
        if(arr[i]<0){
            subset2[abs(arr[i])]++;
        }
    }
    cout<<abs(SubsetSum_1-SubsetSum_2);
    
    
    return 0;
}