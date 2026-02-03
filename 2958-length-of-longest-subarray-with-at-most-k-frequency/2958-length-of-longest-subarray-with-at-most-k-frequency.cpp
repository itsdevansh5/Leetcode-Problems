class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int maxl=0;
        int i=0;
        int count=0;
        unordered_map<int,int>mp;
        for(int j=0;j<nums.size();j++){
            mp[nums[j]]++;
            if(mp[nums[j]]>k) count++;

            while(count>0){
                int r=nums[i];
                i++;
                if(mp[r]>k && (mp[r]-1)==k) count--;
                mp[r]--;
            }
            maxl=max(maxl,(j-i+1));
        }
        return maxl;
    }
};