class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int count=0;
        int i=0;
        int maxl=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]==0) count++;

            while(count>1){
                int r=nums[i];
                if(r==0) count--;
                i++;
            }
            maxl=max(maxl,(j-i));
        }
        return maxl;
    }
};