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
    printline(n);

    cout<<endl;
    printpattern(n-1);
}

int main(){
    int a;
    cin>>a;
    printpattern(a);
    return 0;
}