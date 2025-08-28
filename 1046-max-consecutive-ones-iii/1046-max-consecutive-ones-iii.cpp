class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zeroCount = 0;        // Count of zeros in the current window
        int left = 0;             // Left pointer of sliding window
        int maxLength = 0;        // Track max length of valid window

        for (int right = 0; right < nums.size(); ++right) {
            if (nums[right] == 0) {
                ++zeroCount;
            }

            // Shrink window until zeroCount <= k
            while (zeroCount > k) {
                if (nums[left] == 0) {
                    --zeroCount;
                }
                ++left;
            }

            // Calculate window size and update max length
            int windowSize = right - left + 1;
            if (windowSize > maxLength) {
                maxLength = windowSize;
            }
        }

        return maxLength;
    }
};
