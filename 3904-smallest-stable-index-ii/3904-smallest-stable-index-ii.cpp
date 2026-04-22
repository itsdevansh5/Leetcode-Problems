class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>res(n,0);
        int maxe=0;
        for(int i=0;i<n;i++){
            maxe=max(maxe,nums[i]);
            res[i]=maxe;
        }
        int mine=INT_MAX;
        for(int i=n-1;i>=0;i--){
            mine=min(mine,nums[i]);
            res[i]-=mine;
        }
        for(int i=0;i<n;i++){
            if(res[i]<=k) return i;
        }
        return -1;


    }
};