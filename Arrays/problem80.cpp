/*
subasrry sum divisble ny k 
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mapp;
        int sum=0,count=0;
        mapp[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem = sum%k;
            if(rem<0) rem+=k;
            if(mapp.find(rem)!=mapp.end()){
                count+=mapp[rem];
            }
            mapp[rem]++;
        }
        return count;
    }
};
*/
