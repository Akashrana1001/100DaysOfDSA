//find the longets consequitive sequence


#include <iostream>
#include <unordered_set>
using namespace std;


int maxsequence(int arr[],int a){
    unordered_set<int> seq_set;

    for(int i=0;i<a;i++){
        seq_set.insert(arr[i]);
    }
    int maxlength=0;

    for(int i=0;i<a;i++){
        int num=arr[i];
        //only start if the element is the staring of the sequence
        if(seq_set.find(num-1)==seq_set.end()){
            int currentsum=num;
            int length=1;

            while(seq_set.find(currentsum+1)!=seq_set.end()){
                length++;
                currentsum++;
            }
            maxlength = max(length,maxlength);
        }
    }
    return maxlength;

}

int main() {
    int arr[] = {100, 4, 200, 1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<maxsequence(arr,n)<< " is the length of longest subsequence";

    return 0;
}