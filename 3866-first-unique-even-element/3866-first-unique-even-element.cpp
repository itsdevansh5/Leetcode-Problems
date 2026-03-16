class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        vector<int>arr(101,0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0) arr[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0 && arr[nums[i]]==1) return nums[i];
        }
        return -1;
    }
};