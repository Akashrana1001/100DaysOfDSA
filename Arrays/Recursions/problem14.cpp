#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>&arr,int left,int mid,int right){
     vector<int> leftArr(arr.begin() + left, arr.begin() + mid + 1);
    vector<int> rightArr(arr.begin() + mid + 1, arr.begin() + right + 1);

    int i = 0, j = 0, k = left;

    // Merge the temp arrays back into arr
    while (i < leftArr.size() && j < rightArr.size()) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k++] = leftArr[i++];
        } else {
            arr[k++] = rightArr[j++];
        }
    }

    // Copy any remaining elements
    while (i < leftArr.size()) arr[k++] = leftArr[i++];
    while (j < rightArr.size()) arr[k++] = rightArr[j++];
}

void mergesort(vector<int>&arr,int left,int right){
    if(left>=right){
        return;
    }

    int mid = left + (right-left)/2;
    mergesort(arr,left,mid);
    mergesort(arr,mid+1,right);
    merge(arr,left,mid,right);
}

int main(){
    int a;
    cin>>a;
    vector<int>arr(a);
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }

    mergesort(arr,0,a-1);
    for(int i=0;i<a;i++){
        cout<<arr[i];
    }
    return 0;
}