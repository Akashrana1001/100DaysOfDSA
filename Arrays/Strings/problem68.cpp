#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    vector<string>vec(a);

    for(int i=0;i<a;i++)
        cin>>vec[i];
   
    
    //now we have to sort the given string
    sort(vec.begin(),vec.end());

    string first = vec.front();
    string second = vec.back();

    int minlen =  min(first.length(),second.length());
    int i=0;
    while(i<minlen && first[i]==second[i]){
        i++;
    }

    cout<<first.substr(0,i);

    return 0;
}