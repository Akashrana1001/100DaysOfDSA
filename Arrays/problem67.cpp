#include <bits/stdc++.h>
using namespace std;

//retur first non repeating character
int main(){
    string name;
    cin>>name;

    // toh can we use hashmap?
    unordered_map<char,int>freq;

    for(char num:name){
        freq[num]++;
    }
    
    for(char ch:name){
        if(freq[ch]==1){
            cout<<ch<<endl;
            break;
        }
        if(freq[ch]!=1){
            cout<<'$';
            
        }
    }
    return 0;
}
