class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m;
        for(auto i:nums){
            m[i]++;
        }
        vector<int>ans;
        for(int i=1;i<=n;i++){
            if(m.find(i)==m.end())
            ans.push_back(i);
        }
        return ans;
        
    }
};