class Solution {
public:
    long long count(vector<int>& nums, int k){
    long long c = 0;
    int len = 0;

    for(int j = 0; j < nums.size(); j++){
        if(nums[j] <= k){
            len++;
        } else {
            len = 0;
        }
        c += len;
    }
    return c;
}

    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        return count(nums,right)-count(nums,left-1);
    }
};