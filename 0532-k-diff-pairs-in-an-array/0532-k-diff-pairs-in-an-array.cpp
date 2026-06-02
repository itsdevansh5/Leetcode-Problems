class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        std::sort(nums.begin(),nums.end());
        int i=0;
        int j=1;
        int ct=0;
        int n=nums.size();
        while(i<n && j<n){
          int diff=nums[j]-nums[i];
          if(diff==k) {
            ct++;
            i++;
          }
          else if(diff>k) i++;
          else j++;

          while(i>0 && i<n && nums[i]==nums[i-1]) i++;
    
          
          if(i==j) j++;
        }
        return ct;

    }
};