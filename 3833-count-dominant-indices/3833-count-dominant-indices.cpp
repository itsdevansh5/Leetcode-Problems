class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int cursum=nums[nums.size()-1];
        int count=0;
        int n=nums.size();
        for(int j=nums.size()-2;j>=0;j--){
           if(nums[j]>(cursum/(n-j-1))) count++;
           cursum+=nums[j];
        }
        return count;
    }
};