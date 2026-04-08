class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n);
        int cursum=0;
        for(int i=0;i<n;i++){
            cursum+=nums[i];
            res[i]=cursum;
        }
        return res;
    }
};