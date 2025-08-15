class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)
            pos.push_back(nums[i]);
            else
            neg.push_back(nums[i]);
        }
        int a=0;
        for(int i=0;i<nums.size();i+=2){
            nums[i]=pos[a];
            nums[i+1]=neg[a];
            a++;

        }
        return nums;
        
    }
};