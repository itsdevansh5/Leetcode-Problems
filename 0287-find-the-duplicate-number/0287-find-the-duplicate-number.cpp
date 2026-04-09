class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int ans;
       for(int i=0;i<nums.size();i++){
        int v=abs(nums[i]);
        if(nums[v-1]<0){
            ans=v;
            break;
        }
        nums[v-1]=-nums[v-1];
       }
       return ans;
    }
};