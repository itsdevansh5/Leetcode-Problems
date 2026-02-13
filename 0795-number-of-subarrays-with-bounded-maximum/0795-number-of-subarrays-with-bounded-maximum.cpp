class Solution {
public:
    int count(vector<int>&nums,int k){
        int i=0;
        long long  c=0;
        bool invalid=false;
        for(int j=0;j<nums.size();j++){
            if(nums[j]>k) invalid=true;

            while(invalid){
                int r=nums[i];
                i++;
                if(r>k) invalid=false;
            }
            c+=(j-i+1);
        }
        return c;
    }
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        return abs(count(nums,right)-count(nums,left-1));
    }
};