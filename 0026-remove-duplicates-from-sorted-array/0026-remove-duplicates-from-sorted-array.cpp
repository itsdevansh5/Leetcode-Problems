#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        // Handle edge case of an empty or single-element vector
        if (nums.size() <= 1) {
            return nums.size();
        }

        int i = 0;
        // Loop while 'i' is not the last element, to safely check i+1
        while (i < nums.size() - 1) {
            // Check if the current element is a duplicate of the next one
            if (nums[i] == nums[i + 1]) {
                // Erase the duplicate element (at i + 1)
                nums.erase(nums.begin() + (i + 1));
            } else {
                // If it's not a duplicate, move to the next element
                i++;
            }
        }
        
        // Return the new size of the vector after all duplicates have been removed
        return nums.size();
    }
};