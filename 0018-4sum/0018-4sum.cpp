class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>res;
        std::sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<n;j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                int l=j+1;
                int r=n-1;
                long long p=nums[i];
                long long q=nums[j];
               long long req=(long long)target-(p+q);
                while(l<r){
                    long long a=nums[l];
                    long long b=nums[r];
                    long long sum=a+b;
                    if(sum>req) r--;
                    else if(sum<req) l++;
                    else {
                        res.push_back(vector<int>{nums[i],nums[j],nums[l],nums[r]});
                        l++;
                        r--;
                        while(l<r && nums[l]==nums[l-1]) l++;
                        while(l<r && nums[r]==nums[r+1]) r--;
                    }
                     
                }
            }
        }
        return res;
    }
};