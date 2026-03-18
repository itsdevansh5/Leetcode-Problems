class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int res = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i-1]) continue;
            int l = i + 1, r = n - 1;

            while (l < r) {
                int cur = nums[i] + nums[l] + nums[r];

                if (abs(cur - target) < abs(res - target))
                    res = cur;

                if (cur == target)     return target;
                else if (cur < target) l++;
                else                   r--;
            }
        }
        return res;
    }
};