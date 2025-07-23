#include <bits/stdc++.h>
using namespace std;
//subset and subsequcen problem

void subset(vector<int>&arr,vector<int>&output,int index){
    if(index==arr.size()){
        for(int num:output){
            cout<<num<<" ";
        }
        cout<<endl;
        return;
    }

    //include the first one 
    output.push_back(arr[index]);
    subset(arr,output,index+1);
    //exclude the current element
    output.pop_back();
    subset(arr,output,index+1);
}

int main(){
    
    int a;
    cin>>a;
    
    vector<int>arr(a);
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    vector<int>output; 
    subset(arr,output,0);

    return 0;
}