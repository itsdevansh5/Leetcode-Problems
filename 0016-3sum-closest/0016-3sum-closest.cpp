class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        std::sort(nums.begin(),nums.end());
        int n=nums.size();
        int mins=INT_MAX;
        int res;
        for(int i=0;i<n-2;i++){
            int l=i+1;
            int r=n-1;
            int cur;
            while(l<r){
             cur=nums[i]+nums[l]+nums[r];
              if(cur>target) r--;
              else if(cur<target) l++;
              else return target;

              if(mins>abs(cur-target)){
                mins=abs(cur-target);
                res=cur;
              }

              
              
            }
           
        }
        return res;
    }
};