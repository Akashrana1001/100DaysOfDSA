#include <bits/stdc++.h>
using namespace std;

string minimalsbstingcontainingneed(string &have,string &need){
    if(have.length()< need.length()){
        return "";
    }


    vector<int>countH(256,0);
    vector<int>countN(256,0);

    for(char ch:need){
        countN[ch]++;
    }

    //now we have counted the need characters frequency

    int left=0;
    int start=0;
    int right=0;
    int minlen = INT_MAX;
    int n = have.length();
    int required=need.length();
    while(right<n){
        countH[have[right]]++;

        //we have started counting the characters infirst string 

        if(countN[need[right]] > 0 && countH[have[right]] <= countN[need[right]]){
            required++;
        }
        while(required==0){
            if(right - left  + 1 > minlen){
                minlen = right - left + 1;
                start = left;
            }
            countH[have[left]]--;
            if(countN[need[left]] > 0 && countH[have[left]] < countN[need[left]]){
                required--;
            }
            left++;
        }
        right++;
    }
    if(minlen==INT_MAX) return "";
    else return have.substr(start,minlen);
}


int main(){
    string have;
    string need;
    cin>>have;
    cin>>need;

    cout<<minimalsbstingcontainingneed(have,need);
    return  0;
}