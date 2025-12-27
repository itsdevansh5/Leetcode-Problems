class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<3) return nums.size();
        int j=2;
        int i=2;
        while(j<nums.size()){
            if(nums[j]!=nums[i-2]){
                 nums[i]=nums[j];
                 i++;
            }
            j++;
           
        }
        return i;
    }
};