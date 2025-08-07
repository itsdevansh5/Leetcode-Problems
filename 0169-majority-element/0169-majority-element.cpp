class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        int ans;
        for(auto i:freq){
            if(i.second>(nums.size())/2)
            ans= i.first;
        }
        return ans;
    }
};