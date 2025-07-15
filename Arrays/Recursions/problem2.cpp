#include <bits/stdc++.h>
using namespace std;

int square(int n){
    if(n==0){
        return 1;
    }
    return 2 * square(n-1);
}


int main(){

    int a;
    cin>>a;

    int n = square(a);
    cout<<n;
}