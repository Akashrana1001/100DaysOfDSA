#include <iostream>
#include <vector>
using namespace std;
// Happy number "a happy number is when the sum  of his digitsquare is equal to 1"
int getsum(int a){
    int total=0;
    while(a>0){
        int digit = a%10;
        total+=digit*digit;
        a=a/10;
    }
    return total;
}

bool isHappy(int a){
    int slow=a;
    int fast=getsum(a);

    while(fast!=1 && slow!=fast){
        slow = getsum(slow);
        fast=getsum(getsum(fast));
    } 
    return fast==1;
}

int main(){

    int a;
    cin>>a;

cout << "Is " << a << " a happy number? " << (isHappy(a) ? "Yes" : "No") << endl;
    
return 0;
}