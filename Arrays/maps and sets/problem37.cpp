// Online C++ compiler to run C++ program online
#include <iostream>
#include <unordered_map>
#include <sstream>
using namespace std;
int main() {
    string name;
    getline(cin, name);    
    
    for(char& c:name){
        if(ispunct(c)){
            c=' ';
        }
    }
    
    istringstream iss(name);
    string word;
    unordered_map<string,int> wordcount;
    
    while(iss>>word){
        wordcount[word]++;
    }
    
    for(const auto& it: wordcount)
    {
        if(it.second==1){
            cout<<it.first<<" ";
        }
    }

    return 0;
}