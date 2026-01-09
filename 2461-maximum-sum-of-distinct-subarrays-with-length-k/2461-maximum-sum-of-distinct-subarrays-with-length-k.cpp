class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long maxS = 0;
        if (nums.size() < k) return 0;

        unordered_map<int, int> mp;
        long long currS = 0;
        int i = 0;

        for (int j = 0; j < nums.size(); j++) {
            mp[nums[j]]++;
            currS += nums[j];

            while ((j - i + 1) > k) {
                int r = nums[i];
                mp[r]--;             
                currS -= r;
                if (mp[r] == 0) mp.erase(r);
                i++;
            }

            if ((j - i + 1) == k && mp.size() == k) {
                maxS = max(maxS, currS);
            }
        }
        return maxS;
    }
};
