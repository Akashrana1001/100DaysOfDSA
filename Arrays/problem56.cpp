//count number of continuous subarray with sliding window
#include <iostream>
#include <vector>
using namespace std;

int atmost(vector<int>arr,int k){
    int sum=0, res=0, start=0;

    for(int i=0;i<arr.size();i++){
        sum+=arr[i];

        while(start<i && sum>k){
            sum-=arr[start];
            start++;
        }
        res+=(i-start+1);
    }
    return res;
}

int numberOfSubarrays(vector<int>arr,int k){
    int ans = atmost(arr,k) - atmost(arr,k-1);
    return ans;
}

int main() {
    vector<int> arr = { 1, 0, 1, 1, 0, 1 };
    int k = 2;

    cout << numberOfSubarrays(arr, k) << endl;

    return 0;
}