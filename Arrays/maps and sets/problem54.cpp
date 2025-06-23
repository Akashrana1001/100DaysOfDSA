//good pairs
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
     unordered_map<int, int> freq;
        int count = 0;

        for (int num : nums) {
            // Before adding this occurrence, we can already form "freq[num]" pairs with previous ones
            count += freq[num];
            freq[num]++;
        }
        return count;
    }
};
