#include <bits/stdc++.h>
using namespace std;

bool sorted( vector<int> arr, int i)
{

    if (i == 0)
    {
        return true;
    }
    if(arr[i] < arr[i-1]){
        return false;
    }
    return sorted(arr,i-1);
   
}

int main()
{
    int a;
    cin >> a;
    vector<int> vec(a);
    for (int i = 0; i < a; i++)
    {
        cin >> vec[i];
    }
    int i = a - 1;
    if(sorted(vec,i)){
        cout<<"sorted"<<endl;
    }
    else{
        cout<<"not sorted";
    }
    return 0;
}