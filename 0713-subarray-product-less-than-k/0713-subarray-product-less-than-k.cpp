class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<2) return 0;
        int count=0;
        int i=0;
        int j=nums.size()-1;
        long long curP=1;
        for(int j=0;j<nums.size();j++){
             curP*=nums[j];

             while(curP>=k){
                int r=nums[i];
                i++;
                curP/=r;
             }
             count+=(j-i+1);
        }
        return count;
    }
};