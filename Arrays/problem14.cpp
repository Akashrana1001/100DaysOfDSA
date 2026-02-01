// 3. Check if Array is Sorted (Non-Decreasing)
#include <iostream>
using namespace std;

bool correct(int a,int arr[]){
    bool sort=false;
    for (int i = 0; i < a; i++)
    {
        if(arr[i]<=arr[i+1]){
            sort=true;
        }
        else{
            sort=false;
            break;
        }
    }
    if(sort){
        return true;
    }
    else{
        return false;
    }


}


int main(){
    int a;
    cin>>a;
   
    int * arr =new int[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }

    if(correct(a,arr)){
        cout<<"array is sorted";
    }
    else{
        cout<<"array is not sorted";
    }


    return 0;
}