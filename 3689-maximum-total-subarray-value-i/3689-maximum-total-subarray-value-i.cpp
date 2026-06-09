class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long  maxv=*max_element(nums.begin(),nums.end());
        long minv=*min_element(nums.begin(),nums.end());
        return k*(maxv-minv);
    }
};