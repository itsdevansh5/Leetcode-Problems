class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(auto i:nums){
            freq[i]++;
        }
        vector<int>ans;
        for(auto it:freq){
            if(it.second>(nums.size())/3)
            ans.push_back(it.first);
            

        }
        return ans;
    }
};