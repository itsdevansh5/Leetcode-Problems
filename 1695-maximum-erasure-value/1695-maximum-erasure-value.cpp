class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int cursum=0;
        int maxs=0;
        int i=0;
        vector<bool>arr(1e4,false);
        for(int j=0;j<nums.size();j++){
            int r=nums[j];
            while(arr[r-1]==true){
                int v=nums[i];
                i++;
                arr[v-1]=false;
                cursum-=v;
            }
            arr[r-1]=true;
            cursum+=r;
            maxs=max(maxs,cursum);

           
        }
        return maxs;
    }
};