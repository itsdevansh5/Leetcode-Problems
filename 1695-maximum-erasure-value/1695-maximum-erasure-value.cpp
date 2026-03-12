class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        vector<int> seen(10001,0);

        int left = 0;
        int curSum = 0;
        int maxSum = 0;

        for(int right = 0; right < nums.size(); right++){

            int num = nums[right];

            while(seen[num]){
                int removed = nums[left];
                seen[removed]--;
                curSum -= removed;
                left++;
            }

            seen[num]++;
            curSum += num;

            maxSum = max(maxSum, curSum);
        }

        return maxSum;
    }
};