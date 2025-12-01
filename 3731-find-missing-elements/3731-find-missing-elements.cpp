class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
          int maxv=INT_MIN;
          int minv=INT_MAX;
          for(auto i:nums){
            if(i>maxv)
            maxv=i;
            if(i<minv)
            minv=i;
          }
          unordered_set<int>s(nums.begin(),nums.end());
          vector<int>ans;
          for(int j=minv;j<=maxv;j++){
             if(s.find(j)==s.end())
             ans.push_back(j);
          }
          return ans;
    }
};