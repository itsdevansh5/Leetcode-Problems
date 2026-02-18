class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mp;
        int cursum = 0;
        int maxl = 0;
        
        mp[0] = -1; 
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) nums[i] = -1;
            
            cursum += nums[i];
            
            if(mp.count(cursum)) {
                maxl = max(maxl, i - mp[cursum]);
            } else {
                mp[cursum] = i; 
            }
        }
        
        return maxl;
    }
};
