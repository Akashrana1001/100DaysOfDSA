#include <bits/stdc++.h>
using namespace std;

int main(){
    string txt;
    string pat;
    cin>>txt;
    cin>>pat;
    unordered_map<char,int> freq;
    unordered_map<char,int> freq2;

    for(int i=0;i<pat.length();i++){
        freq[pat[i]]++;
    }

    int k=pat.length();
    for(int i=0;i<k;i++){
        //sabse phle hashmap banega same freq ka 
        freq2[txt[i]]++;
    }
    int count=0;
    if(freq2==freq){
        count++;
    }
    
o    for(int i=k;i<txt.length();i++){
        //sabse phle last wale ki freq hta denge us mapmein nse 
        freq2[txt[i-k]]--;
        if(freq2[txt[i-k]]==0){
            freq2.erase(txt[i-k]);
        }
        freq2[txt[i]]++;
        if(freq==freq2){
            count++;
        }
    }
    cout<<count;
        return 0;
}