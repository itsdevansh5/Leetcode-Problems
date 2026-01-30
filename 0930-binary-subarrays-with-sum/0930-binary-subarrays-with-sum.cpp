class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>mp;
        int cursum=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            cursum+=nums[i];

            if(cursum==goal) count++;
           if (mp.count(cursum - goal))
    count += mp[cursum - goal];

            mp[cursum]++;
        }
        return count;

    }
};