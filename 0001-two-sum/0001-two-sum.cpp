class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        for(auto &i:mp){
            int rest=target-(i.first);
            if(rest==i.first && (i.second).size()>=2){
              return i.second;
                
            }
            else if(rest!=i.first && mp.find(rest)!=mp.end()){
                return {i.second[0],mp[rest][0]};
            }
        }
        return {0,0};
    }
};