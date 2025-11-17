class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(auto i:nums){
            m[i]++;
        }
        vector<int>v;
        for(auto i:m){
            if(i.second>1)
            v.push_back(i.first);
        }
        for(int i=0;i<v.size();i++){
            vector<int>n;
            for(int j=0;j<nums.size();j++){
                if(nums[j]==v[i])
                n.push_back(j);
            }
            for(int g=0;g<n.size();g++){
                for(int h=g+1;h<n.size();h++){
                    if(abs(n[h]-n[g])<=k)
                    return true;
                }
            }
        }
        return false;
    }
};