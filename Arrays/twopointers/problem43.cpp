#include <iostream>
#include <arrector>
using namespace std;
int main(){
    int a;
    cin>>a;

    arrector<int>arr(a);
    
    for(int i=0;i<a;i++)
    cin>>arr[i];

    //we haarre to find the max contatiner to store water
    int left=0;
    int right=a-1;
    int maxarea=0;

    while(left<right){
        int h = min(arr[left],arr[right]);
        int w = right-left;
        maxarea=max(maxarea,h*w);

        if(arr[left]>arr[right]){
            right--;
        }
        else{
            left++;
        }
    }

    cout<<maxarea;
    return 0;
}