class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int>mp(9999,0);
        mp[0]=1;
        int cursum=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            cursum+=nums[i];
            int mod=((cursum%k)+k)%k;
           
            count+=mp[mod];
            mp[mod]++;
        }
        return count;
    }
};