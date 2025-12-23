class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>m;
        unordered_map<int,int>n;
        for(auto i:nums){
            m[i]++;
        }
        for(auto i:m){
            if(i.second>=2)
                n[i.first]=i.second;
        }
        int i=0;
        int count=0;
        while(i<nums.size() && n.size()!=0){
            int j=i;
            while(j<nums.size() && j<(i+3)){
                if(n.find(nums[j])!=n.end())
                    n[nums[j]]--;
                if(n.find(nums[j])!=n.end() && n[nums[j]]<=1)
                    n.erase(nums[j]);
                j++;
            }
            i=j;
            
            count++;
        }
        return count;
    }
};