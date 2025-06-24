#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
    
    int a;
    cin>>a;
    vector<int>arr(a);

    for(int i=0;i<a;i++){
        cin>>arr[i];
    }

    int len=1;
    int count=0;

    for(int i=1;i<a;i++){
        if(arr[i] > arr[i-1]){
            len++;
        }
        else{
            count = count + (len*(len-1)) /2;
            len=1; 
        }
    }

    count = count + (len*(len-1)) /2;
    cout<<count<<" ";
    return 0;
}
