//mini and max element in an array
#include <iostream>
#include <climits>
using namespace std;

void minmax(int a,int arr[]){
    int min=INT_MAX;
    int max = INT_MIN;
    for(int i=0;i<a;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"the min element is " << min <<" and the max element is "<<max;
}

int main(){
    int a;
    cin>>a;

    int*arr=new int[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }

    minmax(a,arr);

    
    return 0;
}