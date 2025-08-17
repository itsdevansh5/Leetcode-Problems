#include <vector>

class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        int n = nums.size();
        if (n == 0) {
            return -1; // Handle empty array
        }

        // Phase 1: Find the rotation point
        int rot;
        int l = 0;
        int h = n - 1; // Correct initialization for right boundary
        while (l < h) { // Use l < h to avoid infinite loops on two-element arrays
            int mid = l + (h - l) / 2;
            if (nums[mid] > nums[h]) {
                l = mid + 1;
            } else {
                h = mid;
            }
        }
        rot = l;

        // Phase 2: Determine which subarray to search
        if (target >= nums[rot] && target <= nums[n - 1]) { // Correct range check
            l = rot;
            h = n - 1; // Correct initialization
        } else {
            l = 0;
            h = rot - 1;
        }

        // Phase 3: Perform standard binary search on the determined subarray
        while (l <= h) {
            int m = l + (h - l) / 2;
            if (nums[m] == target) {
                return m;
            } else if (nums[m] > target) {
                h = m - 1;
            } else {
                l = m + 1;
            }
        }
        return -1;
    }
};