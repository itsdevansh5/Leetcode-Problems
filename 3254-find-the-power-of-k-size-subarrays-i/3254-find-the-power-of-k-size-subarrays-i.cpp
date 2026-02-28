class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<int>res;
        mp[0]=1;
        int len=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]==1) len++;
            else len=1;
            mp[i]=len;
        }
        for(int i=k-1;i<nums.size();i++){
             if(mp[i]>=k) res.push_back(nums[i]);
             else res.push_back(-1);
        }
        return res;
    }
};