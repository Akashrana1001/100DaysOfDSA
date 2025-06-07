#include <bits/stdc++.h>
using namespace std;

const int MAX_CHAR = 26;

char nonRep(const string &s) {
    vector<int> freq(MAX_CHAR, 0);

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        freq[c - 'a']++;
    }

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (freq[c - 'a'] == 1) {
            return c;
        }
    }

    return '$'; // No non-repeating character found
}

int main() {
    string s = "geeksforgeeks";
    cout << nonRep(s) << endl;
    return 0;
}
