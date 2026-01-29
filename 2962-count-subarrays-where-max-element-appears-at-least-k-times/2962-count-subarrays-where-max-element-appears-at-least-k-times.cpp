class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxe=-1;
        for(auto i:nums){
            if(i>maxe){
                 maxe=i;
            }
        }
        long long mcount=0;
        int i=0;
        long long count=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]==maxe) mcount++;

            while(mcount>=k){
                count+=(nums.size()-j);
                int r=nums[i];
                i++;
                if(r==maxe) mcount--;
            }
        }
        return count;
    }
};