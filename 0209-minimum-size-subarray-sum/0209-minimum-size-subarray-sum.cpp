class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int i=0;
       int cursum=0;
       int minl=INT_MAX;
       for(int j=0;j<nums.size();j++){
            cursum+=nums[j];

            while(cursum>=target){
                if(minl>(j-i+1))
                minl=j-i+1;
                int r=nums[i];
                i++;
                cursum-=r;
            }

       } 
       if(minl!=INT_MAX)
       return minl;
       else
       return 0;
    }
};