#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a;
    cin>>a;

    vector<int>v(a);
    
    for(int i=0;i<a;i++)
    cin>>v[i];

    //we have to find the max contatiner to store water
    int left=0;
    int right=a-1;
    int maximum=0;
    while(left<right){
        int height=min(v[left],v[right]);
        int width=right-left;
        int area=height*width;

        maximum = max(area,maximum);

        if(v[left]>v[right]){
            right--;
        }
        else{
            left++;
        }
    }
    cout<<maximum<<" ";
    return 0;
}