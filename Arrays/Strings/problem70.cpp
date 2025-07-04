#include <bits/stdc++.h>
using namespace std;

// Minimum distance between the given two words

int main()
{
    int a;
    cin>>a;
    vector<string>str(a);

    for(int i=0;i<a;i++){
        cin>>str[i];
    }

    string one;
    string two;
    cin>>one;
    cin>>two;

    int  d1=-1,d2=-1,ans=INT_MAX;

    for(int i=0;i<a;i++){
        if(str[i]==one){
            d1=i;
        }
        if(str[i]==two){
            d2=i;
        }
        if(d1!=-1 && d2!=-1){
            ans = min(ans,abs(d2-d1));
            break;
        }
    }
    cout<<ans;



    return 0;
}