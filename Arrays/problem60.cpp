// C++ program to find largest subarray sum with
// at-least k elements in it.
#include <bits/stdc++.h>
using namespace std;

int maxSumWithK(vector<int>& arr, int k) {
    
    int n=arr.size();
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }

   int res=sum;
   int curr=0;
   int maxcurr=0;
   
   for(int i=k;i<n;i++){
    
    curr+=arr[i-k];
    maxcurr=max(maxcurr,curr);

    sum+=arr[i]-arr[i-k];

    res=max(res,sum);
    res=max(res,sum+maxcurr);
   }
   return res;
}

int main() {
    vector<int> arr = {-4, -2, 1, -3};
    int k = 2;
    cout << maxSumWithK(arr, k);
    return 0;
}