class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        vector<int>ans;
        for(auto i:mp){
  if((i.second==1) && mp.find(i.first+1)==mp.end() && mp.find(i.first-1) ==mp.end())
  ans.push_back(i.first);
        }
        return ans;
    }
};