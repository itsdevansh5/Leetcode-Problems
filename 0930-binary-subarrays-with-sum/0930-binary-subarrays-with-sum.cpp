class Solution {
public:
    int Count(vector<int>nums,int g){
        if(g<0) return 0;
        int cursum=0;
        int i=0;
        int count=0;
        for(int j=0;j<nums.size();j++){
            cursum+=nums[j];

            while(cursum>g){
                int r=nums[i];
                i++;
                cursum-=r;
            }
            count+=(j-i+1);


        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
      return Count(nums,goal)-Count(nums,goal-1);

    }
};