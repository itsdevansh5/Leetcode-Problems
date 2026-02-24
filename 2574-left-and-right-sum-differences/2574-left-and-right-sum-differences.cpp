class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        
        int leftsum = 0;
        int rightsum = 0;
        
        for(int i = 0; i < n; i++) {
            rightsum += nums[i];
        }
        
        for(int i = 0; i < n; i++) {
            rightsum -= nums[i];
            res[i] = abs(rightsum - leftsum);
            leftsum += nums[i];
        }
        
        return res;
    }
};