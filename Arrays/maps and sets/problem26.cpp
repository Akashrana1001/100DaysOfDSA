
// Sort an array according to the order defined by another array
// Input: arr1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8}
//            arr2[] = {2, 1, 8, 3}
// Output: arr1[] = {2, 2, 1, 1, 8, 8, 3, 5, 6, 7, 9}
#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;

void relativesort(vector<int>&arr,int a,vector<int>%arr2,int b){
    //first we weill make a map and will count the frewuency of each element
    unordered_map<int,int> mapp;

    for(int i=0;i<a;i++){
        freq[arr[i]]++;
    }

    //now we will store the elements of second array in the new vector
    vector<int>result;
    for(int i=0;i<b;i++){
        int num = arr2[i];
        while(freq[num]>0){
            result.push_back(num);
            freq[num]--;
        }
        freq.erase(num);
    }

    //now we have to sort the remaining array
    vector<int>remaining;
    for(auto& it:freq){
        while(it.second--  > 0){
            remaining.push_back(it.first);
        }
    }

    sort(remaining.begin(),remaining.end());
    result.insert(result.end(),remaining.begin(),remaining.end());

    arr1= result;
}

void printarr(vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    
    int a;
    cin>>a;

    vector<int>arr(a);
    for(int i=0;i<a;i++){
        cin>>v[i];
    }

    int b;
    cin>>b;
    vector<int>arr2(b);

    for(int i=0;i<b;i++){
        cin>>arr2[i];
    }

    realtivesort(arr,a,arr2,b);
    printarr(arr,a);

    


    return 0;
}