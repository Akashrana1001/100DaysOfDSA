//best time to best and sell stocks

#include <iostream>
#include <climits>
using namespace std;
int main(){
    int size;
    cin >> size;

    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    //we have to make the most of the proft possible
    int maxprofit=INT_MIN;
    int bestbuy=arr[0];
    for(int i=1;i<size;i++){
        bestbuy = min(arr[i],bestbuy);
        maxprofit = max(arr[i]-bestbuy,maxprofit);
    }
    cout<<maxprofit;

    return 0;
}