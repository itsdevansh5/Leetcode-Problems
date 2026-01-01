class Solution {
public:
    int rev(int a){
        int r=0;
        while(a>0){
            r=10*r+(a%10);
            a/=10;
        }
        return r;
    }
    int countNicePairs(vector<int>& nums) {
        long long mod=1e9+7;
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]-rev(nums[i])].push_back(nums[i]);
        }
        long long count=0;
        for(auto i:mp){
            if((i.second).size()>=2){
                 long long n=(i.second).size()-1;
                 count+=((n*(n+1))/2);
                 count%=mod;
            }
        }
        return (int)count%mod;
    }
};