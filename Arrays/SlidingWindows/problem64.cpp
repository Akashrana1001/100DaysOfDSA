#include <bits/stdc++.h>
using namespace std;

int main(){
     int a;
    cin>>a;
    vector<int>vec(a);
    vector<int>ans;
    for(int i=0;i<a;i++){
        cin>>vec[i];
    }
    int k;
    cin>>k;
    
    bool found=false;
    
    for(int i=0;i<k;i++){
        if(vec[i]<0){
            found=true;
            ans.push_back(vec[i]);
            break;
        }
    }
    if(!found){
        ans.push_back(0);
    }
        int n=ans.size();
    

    for(int i=k;i<a;i++){
        found = false; 
        for(int j=(i-k)+1;j<=i;j++){
            if(vec[j]<0){
                found=true;
                ans.push_back(vec[j]);break;
            }
        }
        if(!found){
            ans.push_back(0);
        }
    }
    n=ans.size();
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}