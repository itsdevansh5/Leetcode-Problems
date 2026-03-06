class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>rem;
        int cursum=0;
        for(int i=0;i<nums.size();i++){
            cursum+=nums[i];
            int r=cursum%k;
            if(r==0 && i>=1) return true;
            else if(rem.find(r)!=rem.end() && (i-rem[r]>=2)) return true;
            if(rem.find(r)==rem.end())
            rem[r]=i;
        }
        return false;
    }
};