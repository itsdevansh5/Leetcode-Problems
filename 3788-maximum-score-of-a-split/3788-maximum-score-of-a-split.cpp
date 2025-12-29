class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        long long presum=0;
        long long maxscore=LLONG_MIN;
        vector<long long>mp(nums.size());
        long long sufsum=LLONG_MAX;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]<sufsum)
            sufsum=nums[i];
            mp[i]=sufsum;
        }
        for(int i=0;i<nums.size()-1;i++){
            presum+=nums[i];
            long long diff;
             diff=presum-mp[i+1];
            if(diff>maxscore)
            maxscore=diff;


        }
        return maxscore;
    }
};