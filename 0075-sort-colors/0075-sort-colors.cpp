class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a=0;
        int b=0;
        int c=0;
        for(auto i:nums){
            if(i==0) a++;
            else if(i==1) b++;
            else c++; 
        }
        int i=0;
        while(i<nums.size()){
            while(i<nums.size() && a--){
                nums[i]=0;
                i++;
            }
            while(i<nums.size() && b--){
                nums[i]=1;
                i++;
            }
            while(i<nums.size() && c--){
                nums[i]=2;
                i++;
            }
        }
        return;
    }
};