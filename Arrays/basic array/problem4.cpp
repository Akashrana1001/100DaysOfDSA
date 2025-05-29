#include <iostream>
#include <algorithm>
using namespace std;

bool anagram(string s,string t){
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    return s==t;
}

int main() {
    string first, second;
    cin >> first >> second;

    if (anagram(first, second)) {
        cout << "this is an anagram";
    } else {
        cout << "this is not an anagram";
    }

    return 0;
}
