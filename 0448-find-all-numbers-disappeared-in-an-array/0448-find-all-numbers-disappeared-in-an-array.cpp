class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>res;
        for(int i=0;i<nums.size();i++){
             int v=abs(nums[i]);
             if(nums[v-1]>0)
             nums[v-1]=-nums[v-1];
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) res.push_back(i+1);
            
        }
        return res;
    }
};