#include <bits/stdc++.h>
using namespace std;

/*
print patttern 
****
***
**
*

*/

void printline(int n){
    if(n==0){
        return;
    }
    cout<<"*";
    printline(n-1);
}

void printpattern(int n){
    if(n==0){
        return;
    }
    
    printpattern(n-1);
    cout<<endl;
    printline(n);
}

int main(){
    int a;
    cin>>a;
    printpattern(a);
    return 0;
}