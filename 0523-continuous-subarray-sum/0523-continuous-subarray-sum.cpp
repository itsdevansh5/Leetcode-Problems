class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>rem;
        int cursum=0;
        rem[0]=-1;
        for(int i=0;i<nums.size();i++){
            cursum+=nums[i];
            int r=cursum%k;
             if(rem.find(r)!=rem.end() && (i-rem[r]>=2)) return true;
            if(rem.find(r)==rem.end())
            rem[r]=i;
        }
        return false;
    }
};