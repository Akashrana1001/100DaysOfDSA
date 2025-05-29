#include <iostream>
using namespace std;

void reverse(int a,int arr[]){
    //we have to reverse a array in 0(n);

    int s=0;
    int t=a-1;
    while(s<t){
        swap(arr[s],arr[t]);
        s++;
        t--;
    }
}


int main(){
    int a;
    cin>>a;

    int*arr=new int[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }

    //reverse a array
    reverse(a,arr);
    for(int i=0;i<a;i++){
        cout<<arr[i];
    }

    return 0;

}