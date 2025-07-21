#include <iostream>
#include <vector>
using namespace std;

int findmin(vector<int>&arr, int i , int n,int minidx){
    if(i==n){
        return minidx;
    }

    //we find another small element
    if(arr[i] < arr[minidx]){
        minidx = i;
    }
    return findmin(arr,i+1,n,minidx);
}
void selectionSort(vector<int>&arr, int i , int n){

    //base case
    if(i==n-1){
        return;
    }

    int minidx = findmin(arr,i+1,n,i);
    if(i!=minidx){
        swap(arr[minidx],arr[i]);
    }
    return selectionSort(arr,i+1,n);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    selectionSort(arr, 0, n);

    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}
