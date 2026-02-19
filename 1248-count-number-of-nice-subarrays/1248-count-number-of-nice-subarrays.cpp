class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<long long,int>mp;
        int cursum=0;
        int count=0;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0) nums[i]=0;
            else nums[i]=1;

            cursum+=nums[i];

            count+=mp[cursum-k];

            mp[cursum]++;
        }

        return count;


    }
};