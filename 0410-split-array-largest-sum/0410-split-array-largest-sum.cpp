class Solution {
public:
    bool isPossible(vector<int>&nums,int s,int k){
      long long sum=0;
      int div=1;
      for(int i=0;i<nums.size();i++){
        if(sum+nums[i]>s) {
          sum=nums[i];
          div++;
        }
        else sum+=nums[i];
      }
      return div<=k;

    }
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        int ans=0;
        while(low<=high){
          int mid=low+(high-low)/2;
          if(isPossible(nums,mid,k)) {
             ans=mid;
             high=mid-1;
          }
          else low=mid+1;
        }
        return ans;
    }
};