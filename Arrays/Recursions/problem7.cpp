#include <iostream>
using namespace std;

int power(int a,int b){
    if(b==1){
        return a;
    }
    return a* power(a,b-1);
}
int main() {
    int a,b;
    cin >> a>>b;

    int ans= power(a,b);
    cout<<ans;
    return 0;
}