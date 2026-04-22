class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
         int maxe=0;
        for(int i=0;i<nums.size();i++){
           
            int mine=INT_MAX;
               maxe=max(maxe,nums[i]);
               for(int j=i;j<nums.size();j++) mine=min(mine,nums[j]);
               if(maxe-mine<=k) return i;
        }
        return -1;
    }
};