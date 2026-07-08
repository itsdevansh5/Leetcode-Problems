class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
     int maxv=1;
     int res=2;
     int n=nums.size();
     for(int i=n-1;i>=k;i--){
      maxv=max(maxv,nums[i]);
      res=max(res,maxv+nums[i-k]);
     }   
     return res;
    }
};