class Solution {
  public:
    string findSum(string &s1, string &s2) {
        // Make sure s1 is the longer string
        if (s1.length() < s2.length()) {
            swap(s1, s2);
        }

        int n1 = s1.length();
        int n2 = s2.length();
        int diff = n1 - n2;

        string result = "";
        int carry = 0;

        // Add from the end (right to left)
        for (int i = n2 - 1; i >= 0; i--) {
            int sum = (s1[i + diff] - '0') + (s2[i] - '0') + carry;
            result.push_back((sum % 10) + '0');
            carry = sum / 10;
        }

        // Add remaining digits of s1
        for (int i = diff - 1; i >= 0; i--) {
            int sum = (s1[i] - '0') + carry;
            result.push_back((sum % 10) + '0');
            carry = sum / 10;
        }

        // If carry is left
        if (carry) {
            result.push_back(carry + '0');
        }

        // Reverse the result string
        reverse(result.begin(), result.end());
        return result;
    }
};
