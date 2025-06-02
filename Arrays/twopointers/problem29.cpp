#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a;
    cin>>a;

    vector<int>v(a);
    for(int i=0;i<a;i++){
        cin>>v[i];
    }

    int slow  = 0;
    for(int fast=1;fast<a;fast++){
        if(v[slow]!=v[fast]){
            slow++;
            v[slow]=v[fast];
        }
        
    }

    cout<<slow+1<<" is the length of new array after removing the duplicates and the elements are ";

    for (int i = 0; i <= slow; i++) {
        cout << v[i] << " ";
    }
    return 0;
}