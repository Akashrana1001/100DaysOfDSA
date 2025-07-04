// Find an equal point in a string of brackets
#include <bits/stdc++.h>
using namespace std;
int  main(){
    string str;
    cin>>str;

    int openingcount=0,closingcount=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==')'){
            closingcount++;
        }
    }


    for(int i=0;i<str.length();i++){
        if(openingcount==closingcount){
            cout<<i;
        }
        if(str[i]=='('){
            openingcount++;
        }
        else{
            closingcount--;
        }
    }
    return 0;
}