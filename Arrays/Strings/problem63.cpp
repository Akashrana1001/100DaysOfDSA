#include <bits/stdc++.h>
using namespace std;
//Palidrome check

int main(){
    string name;
    cin>>name;

    int i=0;
    int j=name.length()-1;
    bool fal = false;
    while(i<j){
        if(name[i]!=name[j]){
            fal=true;
            break;
        }
        i++;
        j--;
        
    }

    if(fal){
        cout<<"this is not aa palidrome";
    }
    else{
        cout<<"this is a palidrome";
    }
    
    
    return 0;
}