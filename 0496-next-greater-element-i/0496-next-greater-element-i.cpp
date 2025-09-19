class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]]=i;
        }
        for(auto i:nums1){
            bool inserted=false;
            for(int j=mp[i]+1;j<nums2.size();j++){
                if(nums2[j]>i){
                ans.push_back(nums2[j]);
                inserted=true;
                break;
                }
            }
            if(!inserted)
            ans.push_back(-1);
            
        }
        return ans;
        
        
    }
};