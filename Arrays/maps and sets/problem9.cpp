// 📘 Question 2: Find Element with Maximum Frequency
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

    int maxfreq=0;
    int keyvalue;
    for(auto it:freq)
    {
        if(it.second>maxfreq){
            maxfreq=it.second;
            keyvalue=it.first;
        }
    }

    cout<<"this is the value "<<keyvalue<<" and this is the max freq we have got"<< maxfreq;

return 0;
}