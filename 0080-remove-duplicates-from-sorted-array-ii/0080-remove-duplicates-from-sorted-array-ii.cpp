class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        int i=0;
        while(j<nums.size()){
             int count=0;
             int a=nums[j];
             while(i<nums.size() && j<nums.size() && nums[j]==a){
                count++;
                if(count<=2){
                nums[i]=nums[j];
                i++;
                }
                j++;
                
             }
        }
        return i;
    }
};