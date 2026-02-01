#include <iostream>
#include <unordered_set>
using namespace std;
int main(){
   int a;
   cin>>a;

   int * arr= new int[a];
   for(int i=0;i<a;i++){
    cin>>arr[i];
   }

   //making a set
   unordered_set<int>s;
  
   for(int i=0;i<a;i++){
    s.insert(arr[i]);
   }

   if(s.size()!=a){
    cout<<"there is duplicate element present";
   }
   else{
    cout<<"no duplicate element present";
   }

    
    return 0;
}