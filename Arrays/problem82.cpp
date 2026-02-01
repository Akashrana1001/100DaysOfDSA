/*
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int k) {
        int sum=0;
        int count=0;
        unordered_map<int,int>mapp;
        mapp[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(mapp.count(sum-k)){
                count+=mapp[sum-k];
            }
            mapp[sum]++;
        }
        return count;
    }
};
*/