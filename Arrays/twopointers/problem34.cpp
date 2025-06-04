// TWo sum in a sorted rotated array
#include <iostream>
#include <vector>
using namespace std;

bool pairInSortedRotated(vector<int>&arr,int n,int target){
    int pivot=0;
    for(int i=0;i<n;i++){
        
        if(arr[i] > arr[(i+1)%n]){
            pivot=(i+1)%n;
            break;
        }
    }
        //then two pointerapproach
        int low = pivot;
        int high=(pivot-1+n)%n;

        while(low!=high){
            int sum=arr[low]+arr[high];

            if(sum==target){
                return true;
            }
            else if(sum<target){
                low = (low+1)%n;
            }
            else{
                high = (high-1+n)%n;  
            }
        }
        return false;
    }



int main() {
    vector<int> arr = { 11,15,6,8,9,10 };
    int n = arr.size();
    int target=17;

      if (pairInSortedRotated(arr, n,target))
        cout << "True\n";
    else
        cout << "False\n";




    return 0;
}