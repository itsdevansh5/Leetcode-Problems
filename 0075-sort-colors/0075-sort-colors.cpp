class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            bool swap=false;
            for(int j=0;j<nums.size()-i-1;j++){
                if(nums[j]>nums[j+1]){
                    std::swap(nums[j],nums[j+1]);
                    swap=true;
                }
                

            }
            if(swap==false)
                return;
        }
        return ;
        
    }
};