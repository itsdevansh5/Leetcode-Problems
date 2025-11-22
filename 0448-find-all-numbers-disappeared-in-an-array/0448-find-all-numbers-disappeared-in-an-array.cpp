class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();

        // Mark visited numbers by negating values at their index
        for(int i = 0; i < n; i++){
            int idx = abs(nums[i]) - 1;
            if(nums[idx] > 0)
                nums[idx] = -nums[idx];
        }

        // Collect indices that remain positive => missing numbers
        vector<int> ans;
        for(int i = 0; i < n; i++){
            if(nums[i] > 0)
                ans.push_back(i + 1);
        }

        return ans;
    }
};
