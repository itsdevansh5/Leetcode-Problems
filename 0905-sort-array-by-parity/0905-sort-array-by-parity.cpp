class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            while(i<nums.size() && nums[i]%2==0) i++;
            while(j>=0 && nums[j]%2!=0) j--;

            if(i<nums.size() && j>=0 && i<j && nums[i]%2!=0 && nums[j]%2==0){
                swap(nums[i],nums[j]);
                i++;
                j--;
            }

            
        }
        return nums;
    }
};