class Solution {
public:
    int singleNumber(vector<int>& nums) {
        set<long long>s(nums.begin(),nums.end());
        long long asum=0;
        for(auto i:s){
           asum+=((long long)i*3);
        }
        long long bsum=0;
        for(auto i:nums){
            bsum+=(long long)i;
        }
        long long diff=asum-bsum;
        for(auto i:s){
           if(((double)diff)/(3*i) ==(2/3.0))
           return i;
        }
        return 0;
        
    }
};