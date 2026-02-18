class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int cursum=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            cursum+=nums[i];
            int mod=((cursum%k)+k)%k;
           
            if(mod==0) count++;
            if(mp.count(mod)) count+=mp[mod];
            mp[mod]++;
        }
        return count;
    }
};