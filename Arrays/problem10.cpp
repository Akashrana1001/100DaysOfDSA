// 📘 Question 3: Check for Duplicates
#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map<int,int> freq;
    int a;
    cin>>a;
    
    int * arr = new int[a];
    
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }

    for(int i=0;i<a;i++){
        freq[arr[i]]++;
    }

    bool duplicate=false;
    
    for(auto it :freq){
        if(it.second>1){
            duplicate=true;
        }
    }

    if(duplicate){
        cout<<"there is a duplicate element in the array";
    }
    else{
        cout<<"array is pure ";
    }

    return 0;
}