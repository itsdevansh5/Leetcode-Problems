class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>mp;
        int cursum=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            cursum+=nums[i];

            if(cursum==goal) count++;
            if(cursum>=goal){
                if(mp.find(cursum-goal)!=mp.end()) count+=mp[cursum-goal];
            }
            mp[cursum]++;
        }
        return count;

    }
};