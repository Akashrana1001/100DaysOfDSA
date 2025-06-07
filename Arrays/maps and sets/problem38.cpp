#include <iostream>
#include <unordered_map>

using namespace std;
int main(){
    string str;
    cin>>str;

    unordered_map<char,int> mapp;

    for(int i=0;i<str.length();i++){
        mapp[str[i]]++;
    }

    for(auto& num:mapp){
        cout<<num.first<<" "<<num.second<<endl;
    }
    return 0;
}