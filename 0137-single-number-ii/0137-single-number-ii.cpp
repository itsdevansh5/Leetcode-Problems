class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<long long>s(nums.begin(),nums.end());
        long long asum=0;
        for(auto i:s){
           asum+=((long long)i*3);
        }
        long long bsum=0;
        for(auto i:nums){
            bsum+=(long long)i;
        }
        long long diff=asum-bsum;
        return (int)(diff/2);
    }
};