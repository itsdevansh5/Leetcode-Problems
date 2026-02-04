class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);

        int l = 0;
        int r = n - 1;
        int k = n - 1;   // position to fill in result

        while (l <= r) {
            int left = nums[l] * nums[l];
            int right = nums[r] * nums[r];

            if (left > right) {
                res[k] = left;
                l++;
            } else {
                res[k] = right;
                r--;
            }
            k--;
        }

        return res;
    }
};
