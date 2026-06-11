class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int minP=0;
        int cursum=0;
        int res=INT_MIN;
        for(int i=0;i<nums.size();i++){
         
          cursum+=nums[i];
          res=max(res,cursum-minP);
          minP=min(minP,cursum);
         
        }
        return res;

    }
};