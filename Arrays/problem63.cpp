#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    vector<int>vec(a);
    for(int i=0;i<a;i++){
        cin>>vec[i];
    }
    int k;
    cin>>k;
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=vec[i];
    }
    int maxsum  = 0;
    maxsum=max(maxsum,sum);
    
    for(int i=k;i<a;i++){
        sum-=vec[i-k];
        sum+=vec[i];
        cout<<sum<<endl;
        maxsum=max(maxsum,sum);
    }
    cout<<maxsum<<" is the greatest ";
        return 0;
}