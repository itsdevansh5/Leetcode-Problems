class Solution {
public:
    int count(vector<int>nums,int k){
          int i=0;
        int c=0;
        unordered_map<int,int>mp;
        for(int j=0;j<nums.size();j++){
          mp[nums[j]]++;

          while(mp.size()>k){
            int r=nums[i];
            i++;
            mp[r]--;
            if(mp[r]==0) mp.erase(r);
          }
          c+=(j-i+1);
        }
        return c;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
       return count(nums,k)-count(nums,k-1);
    }
};