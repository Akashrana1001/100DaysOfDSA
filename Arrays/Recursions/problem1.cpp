#include <bits/stdc++.h>
using namespace std;
//recursion 
//how function cals works
void third(){
    cout<<"i am third"<<endl;;
    cout<<"third is finished"<<endl;
   }
void second(){
    cout<<"i am second"<<endl;
    third();
    cout<<"second is finished"<<endl;
   }
   
void first(){
    cout<<"i am first"<<endl;
    second();
    cout<<"first is finished"<<endl;
   }
   
int main(){
   first();
    return 0;
}