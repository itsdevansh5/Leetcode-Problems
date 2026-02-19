class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0] = 1; 
        
        int cursum = 0;
        int count = 0;
        
        for(int i = 0; i < nums.size(); i++) {

            int val = nums[i] % 2;
            
            cursum += val;
            
        
            if(mp.count(cursum - k)) {
                count += mp[cursum - k];
            }
            
            mp[cursum]++;
        }
        
        return count;
    }
};
