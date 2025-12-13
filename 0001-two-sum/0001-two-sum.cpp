class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int rest=target-nums[i];
            if(mp.size()!=0 && mp.find(rest)!=mp.end())
            return {i,mp[rest]};
            else
            mp[nums[i]]=i;
        }
        return{0,0};
    }
};