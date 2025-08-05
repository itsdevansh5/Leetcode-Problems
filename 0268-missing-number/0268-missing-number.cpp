class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int expectedsum=0;
        int actualsum=0;
        for(int i=0;i<=n;i++){
            expectedsum+=i;
            
        }
        for(auto it:nums){
            actualsum+=it;
        }
        return expectedsum-actualsum;
        
    }
};