#include <bits/stdc++.h>
using namespace std;

int printitself(int n){
    if(n==5){
        return 1 ;
    }
    cout<<n<<endl;
    return printitself(n+1);
}


int main(){
    printitself(1);

}