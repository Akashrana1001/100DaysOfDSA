#include <iostream>
using namespace std;
int main(){
    
    // 3. Remove Duplicates from a Sorted Array
    int a;
    cin>>a;
    
    int*arr= new int[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }

    int i=0;
    int j=a-1;

    while(i<j){
        if(arr[i]==arr[j]){
            j++;
        }
        else{
            arr[i++]=arr[j];
        }
    }
    for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}