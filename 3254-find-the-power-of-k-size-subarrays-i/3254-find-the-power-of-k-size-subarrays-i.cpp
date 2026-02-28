class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        if(k==1) return nums;
        vector<int>res;
        int len=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]==1) len++;
            else len=1;
            if(len>=k) res.push_back(nums[i]);
            else if(i>=k-1) res.push_back(-1);
        }
       
        return res;
    }
};