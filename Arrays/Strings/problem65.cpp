#include <bits/stdc++.h>
using namespace std;
//Reverse a string 

int main(){
    string s;
    getline(cin,s);

    reverse(s.begin(),s.end());
    cout<<s;
    
    
    return 0;
}