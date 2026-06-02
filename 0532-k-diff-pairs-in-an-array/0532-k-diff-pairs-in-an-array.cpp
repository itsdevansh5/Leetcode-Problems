class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        std::sort(nums.begin(),nums.end());
        int n=nums.size();
        unordered_map<int,int>mp;
        int ct=0;
        int i=0;
        while(i<n){
          int need=nums[i]-k;
          if(k!=0 && mp.count(need) && !mp.count(nums[i])) ct++;
          else if(k==0 && mp[nums[i]]==1) ct++;
          mp[nums[i]]++;
          i++;
        }
        return ct;
    }
};