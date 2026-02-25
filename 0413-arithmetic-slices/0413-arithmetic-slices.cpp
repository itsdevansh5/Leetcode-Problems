class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3) return 0;
        int i=0;
        int count=0;
        int diff=nums[1]-nums[0];
        for(int j=2;j<nums.size();j++){
            int curdiff=nums[j]-nums[j-1];
            if(curdiff==diff) count+=(j-i-1);
            else{
                i=j-1;
                diff=curdiff;
            }
            
        }
        return count;
    }
};