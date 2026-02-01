#include <iostream>
#include <unordered_set>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_set<char> seen;
    int left = 0, maxLen = 0;

    for (int right = 0; right < s.length(); right++) {
        // Shrink the window from left if duplicate found
        while (seen.find(s[right]) != seen.end()) {
            seen.erase(s[left]);
            left++;
        }

        seen.insert(s[right]);
        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}

int main() {
    string s = "abcabcbb";
    cout << "Longest substring without repeating characters: " << lengthOfLongestSubstring(s) << endl;
    return 0;
}
