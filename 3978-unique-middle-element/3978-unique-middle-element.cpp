class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n=nums.size();
        int mid=nums[(n-1)/2];
        for(int i=0;i<n;i++){
          if(i==(n-1)/2) continue;
          if(nums[i]==mid) return false;
        }
        return true;
    }
};