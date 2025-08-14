class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(auto i:nums){
            freq[i]++;

        }
        int ans;
        for(auto i:freq){
            if(i.second==1)
            ans=i.first;

        }
        return ans;
    }
};