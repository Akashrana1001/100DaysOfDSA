// 📘 Question 5: Count Distinct Elements

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
    int count=0;
    for(auto it:freq){
        if(it.second<2){
            count++;
        }
    }
    cout<<count;
    
    return 0;
}