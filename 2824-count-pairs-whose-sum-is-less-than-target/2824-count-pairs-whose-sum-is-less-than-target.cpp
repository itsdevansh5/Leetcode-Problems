class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        std::sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        int count=0;
        while(i<j){
            if(nums[i]+nums[j]>=target) j--;
            else{
                count+=(j-i);
                i++;
            }
        }
        return count;
    }
};