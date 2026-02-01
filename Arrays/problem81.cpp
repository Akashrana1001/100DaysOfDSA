// class Solution{
// public:
//     int longestSubarray(vector<int> &nums, int k){a
//          int count=0;
//     unordered_map<int,int>mapp;
//     mapp[0]=-1;
//     int sum=0;
//     int len=0;
//     int maxlen=0;
//     for(int i=0;i<nums.size();i++){
//         //agar koi subarray exist karti hai toh hamara prefix sum equal aaega -k ke  aur isme count kar rhe hain toh hume mapp[0]=1 lena hai  
//         sum+=nums[i];
//         if(mapp.count(sum-k)){
//             len = i -mapp[sum-k];
//             maxlen=max(maxlen,len);
//         }
//         else{
//         mapp[sum]=i;
//         }}
//     return maxlen;
//     }
// };
