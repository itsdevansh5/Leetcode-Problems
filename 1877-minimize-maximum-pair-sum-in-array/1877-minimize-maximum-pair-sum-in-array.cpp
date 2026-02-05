class Solution {
public:
    int minPairSum(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        int maxv=0;
        while(i<j){
            int a=nums[i];
            int b=nums[j];
            maxv=max(maxv,(a+b));
            i++;
            j--;

        }
        return maxv;
    }
};