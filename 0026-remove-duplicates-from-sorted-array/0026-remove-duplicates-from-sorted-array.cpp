class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow=0;
        int fast=1;
       while(fast<nums.size()){
        while(fast<nums.size() && nums[slow]==nums[fast]){
            fast++;
        }
        if(slow+1<nums.size() && fast<nums.size()){
        nums[slow+1]=nums[fast];
        slow++;
        }
        
       }
       return slow+1;

    }
};