#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
int main(){
   int a;
    cout << "Enter the size of the first array: ";
    cin >> a;

    int* arr = new int[a];
    cout << "Enter " << a << " elements for the first array: ";
    for (int i = 0; i < a; ++i) {
        cin >> arr[i];
    }

    int b;
    cout << "Enter the size of the second array: ";
    cin >> b;

    int* arr2 = new int[b];
    cout << "Enter " << b << " elements for the second array: ";
    for (int i = 0; i < b; ++i) {
        cin >> arr2[i];
    }

    unordered_set<int>s;

    for(int i=0;i<a;i++){
        s.insert(arr[i]);
    }

    for(int i=0;i<b;i++){
        s.insert(arr2[i]);
    }

    int totalsize=a+b;

    if(s.size() < totalsize){
        cout<<"they have some common element ";
    }
    else{
        cout<<"they donot have any commmon elements";
        }




    
    return 0;
}