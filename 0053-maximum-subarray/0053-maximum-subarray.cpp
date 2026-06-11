class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int res=INT_MIN;
      int dp=0;
        for(int i=0;i<nums.size();i++){
          dp=max(nums[i],dp+nums[i]);
          res=max(res,dp);
        }
        return res;
    }
};