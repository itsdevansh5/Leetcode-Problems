class Solution {
public:
    int lb(vector<int>&nums,int t,int s){
      int l=s;
      int h=nums.size()-1;
      while(l<=h){
        int mid=l+(h-l)/2;
        if(nums[mid]>=t){
          h=mid-1;
        }
        else l=mid+1;
      }
      return l;
    
    }
    int triangleNumber(vector<int>& nums) {
      int n=nums.size();
      int tot=0;
        std::sort(nums.begin(),nums.end());
         for(int i=0;i<n-2;i++){
          for(int j=i+1;j<n-1;j++){
             int s=nums[i]+nums[j];
             int idx=lb(nums,s,j+1);
             if(idx>j+1){
              tot+=(idx-j-1);
             }

          }
         }
         return tot;
    }
};