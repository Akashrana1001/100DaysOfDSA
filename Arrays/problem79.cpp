
/*
A good subarray is a subarray where:
its length is at least two, and   = [23,2,4,6,7], k = 6 true
the sum of the elements of the subarray is a multiple of k.
*/


// leetcode soln: Leetcode 523
/*
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int sum=0;
        unordered_map<int,int>mapp;
        mapp[0]=-1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem = (sum)%k;
            if(rem<0) rem+=k;
            if(mapp.find(rem)!=mapp.end()){
                int len=(i-mapp[rem]) ;
                if(len>=2){
                return true;}
            }
            else{
            mapp[rem]=i;
            }
        }
        return false;
    }
};
*/