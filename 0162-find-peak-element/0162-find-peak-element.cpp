class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        return 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==0){
                    if(nums[i]>nums[i+1])
                    return i;
                }
                else if(i==n-1){
                    if(nums[i]>nums[i-1])
                    return i;
                }
                else{
                    if((nums[i]>nums[i+1])&&(nums[i]>nums[i-1]))
                    return i;
                }
            }
        }
        return -1;
        
    }
};