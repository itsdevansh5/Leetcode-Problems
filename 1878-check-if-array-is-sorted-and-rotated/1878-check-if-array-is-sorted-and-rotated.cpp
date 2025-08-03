class Solution {
public:
    bool check(vector<int>& nums) {
        auto org=nums;
        vector<int>rot(nums.size());
        sort(nums.begin(),nums.end());
        for(int i=0;i<=nums.size();i++){
            for(int j=0;j<nums.size();j++){
                rot[j]=nums[(j+i)%nums.size()];
            }
            if(rot==org)
            return true;
            
            
        }
        return false;
        
    }
};