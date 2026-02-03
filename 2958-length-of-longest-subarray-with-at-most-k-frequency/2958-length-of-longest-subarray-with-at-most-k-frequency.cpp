class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int i = 0, maxl = 0;

        for (int j = 0; j < nums.size(); j++) {
            mp[nums[j]]++;

            while (mp[nums[j]] > k) {
                mp[nums[i]]--;
                if (mp[nums[i]] == 0)
                    mp.erase(nums[i]);
                i++;
            }

            maxl = max(maxl, j - i + 1);
        }
        return maxl;
    }
};
