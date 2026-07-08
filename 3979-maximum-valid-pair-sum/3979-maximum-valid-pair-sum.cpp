class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int maxv=1;
        int n=nums.size();
        vector<int>sufmax(n);
        for(int i=n-1;i>=0;i--){
          maxv=max(maxv,nums[i]);
          sufmax[i]=maxv;
        }
        int res=2;
        for(int i=0;i<n-k;i++){
          int v1=nums[i];
          int v2=sufmax[i+k];
          res=max(res,v1+v2);

        }
        return res;
    }
};