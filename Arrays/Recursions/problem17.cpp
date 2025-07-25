//subsequence of string 

#include <bits/stdc++.h>
using namespace std;

void subsequence(string a,int index,string ans){
    if(index == a.length()){
        cout<<ans<<" ";
        return;
    }

    //include the first index
    subsequence(a,index+1,ans + a[index]);
        
    //exclude 
    subsequence(a,index+1,ans);
}

int main(){
    string a;
    cin>>a;
    subsequence(a,0,"");
    return 0;
}