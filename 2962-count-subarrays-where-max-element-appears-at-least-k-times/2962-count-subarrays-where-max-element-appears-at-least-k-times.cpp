class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxe=-1;
        for(auto i:nums){
            if(i>maxe){
                 maxe=i;
            }
        }
        unordered_map<int,int>n;
        int i=0;
        long long count=0;
        for(int j=0;j<nums.size();j++){
            n[nums[j]]++;

            while(n.count(maxe)>0 && n[maxe]>=k){
                count+=(nums.size()-j);
                int r=nums[i];
                i++;
                n[r]--;
                if(n[r]==0) n.erase(r);
            }
        }
        return count;
    }
};