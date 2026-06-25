class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
         int n=nums.size();
         vector<int>ct(n+1,0);
         int count=0;
         for(int i=0;i<n;i++){
          if(nums[i]==target) count++;
          ct[i+1]=count;
         }
         int res=0;
         for(int i=0;i<n;i++){
          for(int j=i;j<n;j++){
            int num=ct[j+1]-ct[i];
            if(2*num>(j-i+1)) res++;
          }
         }
         return res;
    }
};