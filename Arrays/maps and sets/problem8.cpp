// to count the frequency of each element coming  through hashing
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

    //this will count the frequency of the array elements
    for(int i=0;i<a;i++){
        freq[arr[i]]++;
    }

    //now we will print the array values and key pairs

    for(auto it :freq){
        cout<<it.first<<" -> "<< it.second<<endl;
    }



    return 0;

}