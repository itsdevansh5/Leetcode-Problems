class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();

        int total = m + n;
        int mid = total / 2;

        int i = 0, j = 0;
        vector<int> merged;

        
        while (merged.size() <= mid) {
            if (i < m && (j >= n || nums1[i] <= nums2[j])) {
                merged.push_back(nums1[i]);
                i++;
            } else if (j < n) {
                merged.push_back(nums2[j]);
                j++;
            }
        }

    
        if (total % 2 != 0) {
            return merged[mid];
        }
        
        return (merged[mid] + merged[mid - 1]) / 2.0;
    }
};
