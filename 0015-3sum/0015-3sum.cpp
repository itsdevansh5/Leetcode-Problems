class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int l=i+1;
            int r=nums.size()-1;
            int a=-nums[i];
           while(l < r){
    if(nums[l] + nums[r] == a){
        res.push_back({nums[i], nums[l], nums[r]});

        l++;
        r--;

        while(l < r && nums[l] == nums[l-1]) l++;
        while(l < r && nums[r] == nums[r+1]) r--;
    }
    else if(nums[l] + nums[r] > a) r--;
    else l++;
}
        }
        return res;
    }
};