class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int count=0;
        int presum=0;

        for(int i=0;i<nums.size();i++){
          mp[presum]++;
          presum+=nums[i];
          if(mp.find(presum-k)!=mp.end()) count+=mp[presum-k];


        }
     
        return count;
    }
};