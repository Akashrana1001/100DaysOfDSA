// 📘 Question 4: Find First Element That Appears Twice
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
    int firstdupli=0;
    for(auto it:freq){
        if(it.second>1){
            firstdupli=it.first;
        }
    }

    cout<<"this is the first duplicate element "<<firstdupli; 
 
    return 0;
}